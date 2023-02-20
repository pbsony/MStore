#include "Store.h"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

std::vector<Item*> items;

Store::Store() {
	
}

Store::~Store() {
	
	for (int i = 0; i < items.size(); i++)
		delete items[i];
}
std::vector<std::string>* Store::GetStoreForm()
{
    std::vector<std::string>* vstring = new std::vector<std::string>;
    std::string str;
    std::stringstream strout;
    for (std::vector<Item*>::iterator it = items.begin(); it != items.end(); ++it)
    {
            str = std::to_string((*it)->type) + ' ' + (*it)->name + ' ' + std::to_string((*it)->rating) + ' ' + std::to_string((*it)->price);
            vstring->push_back(str);
    }
    return vstring;
}
std::vector<std::string>* Store::GetGuitarsForm()
{
    std::vector<std::string>* vstring = new std::vector<std::string>;
    std::string str;
    std::stringstream strout;
    for (std::vector<Item*>::iterator it = items.begin(); it != items.end(); ++it)
    {
        if ((*it)->type == Item::Type::Guitar)
        {
            str = std::to_string((*it)->type) + ' ' + (*it)->name + ' ' + std::to_string((*it)->rating) + ' ' + std::to_string((*it)->price);
            vstring->push_back(str);
        }
    }
    return vstring;
}
std::vector<std::string>* Store::GetSynthsForm()
{
    std::vector<std::string>* vstring = new std::vector<std::string>;
    std::string str;
    std::stringstream strout;
    for (std::vector<Item*>::iterator it = items.begin(); it != items.end(); ++it)
    {
        if ((*it)->type == Item::Type::Synth)
        {
            str = std::to_string((*it)->type) + ' ' + (*it)->name + ' ' + std::to_string((*it)->rating) + ' ' + std::to_string((*it)->price);
            vstring->push_back(str);
        }
    }
    return vstring;
}
std::vector<std::string>* Store::GetFlutesForm()
{
    std::vector<std::string>* vstring = new std::vector<std::string>;
    std::string str;
    std::stringstream strout;
    for (std::vector<Item*>::iterator it = items.begin(); it != items.end(); ++it)
    {
        if ((*it)->type == Item::Type::Flute)
        {
            str = std::to_string((*it)->type) + ' ' + (*it)->name + ' ' + std::to_string((*it)->rating) + ' ' + std::to_string((*it)->price);
            vstring->push_back(str);
        }
    }
    return vstring;
}

void Store::readFromFile(string filename) {
    ifstream file;
    file.open(filename);


    if (file.is_open())
    {
        std::string line;
        while (getline(file, line))
        {
            vector<string> list = splitString(',', line);

            if (list.size() != 4) {
                continue;
            }

            int type = stoi(list[0]);
            string name = list[1];
            int price = stoi(list[2]);
            short rating = stoi(list[3]);

            cout << type << " " << name << " " << price << " " << rating << endl;

            if (type == Item::Type::Guitar)
            {
                items.push_back(new Guitar(name, price, rating));
            }
            else if (type == Item::Type::Synth)
            {
                items.push_back(new Synth(name, price, rating));
            }
            else if (type == Item::Type::Flute)
            {
                items.push_back(new Flute(name, price, rating));
            }
            else {
                std::cerr << "Error while reading file...\n";
                exit(1);
            }
        }
    }

    file.close();
}

vector<string> Store::splitString(char splitter, string str) {
    vector<string> result;

    while (str.find(splitter) != string::npos) {
        int pos = str.find(splitter);
        result.push_back(str.substr(0, pos));
        str = str.substr(pos + 2);
    }

    result.push_back(str);

    return result;
}

vector<Item*> Store::getItems() {
    return items;
}

vector<Guitar*> Store::getGuitars() {
    vector<Guitar*> guitars;

    for (Item* item : items) {
        if (item->type == Item::Type::Guitar)
        {
            Guitar* temp = static_cast<Guitar*>(item);
            guitars.push_back(temp);
        }
    }

    return guitars;
}

vector<Synth*> Store::getSynths() {
    vector<Synth*> synths;

    for (Item* item : items) {
        if (item->type == Item::Type::Synth)
        {
            Synth* temp = static_cast<Synth*>(item);
            synths.push_back(temp);
        }
    }

    return synths;
}

vector<Flute*> Store::getFlutes() {
    vector<Flute*> flutes;

    for (Item* item : items) {
        if (item->type == Item::Type::Flute)
        {
            Flute* temp = static_cast<Flute*>(item);
            flutes.push_back(temp);
        }
    }

    return flutes;
}

struct NamePred {
    bool operator()(Item* d1, Item* d2) {
        return d1->name < d2->name;
    }
};

struct RatingPred {
    bool operator()(Item* dd1, Item* dd2) {
        return dd1->rating < dd2->rating;
    }
};

struct PricePred {
    bool operator()(Item* ddd1, Item* ddd2) {
        return ddd1->price < ddd2->price;
    }
};


void Store::sortByName() {
    sort(items.begin(), items.end(), NamePred());
}
void Store::sortByRating() {
    sort(items.begin(), items.end(), RatingPred());
}
void Store::sortByPrice() {
    sort(items.begin(), items.end(), PricePred());
}



struct Comp
{
    bool operator() (Item* s, int i) const { return s->rating < i; }
    bool operator() (int i, Item* s) const { return i < s->rating; }
};
std::vector<string>* Store::getByRating(int rating) {
    std::vector<string>* list = new  std::vector<string>;

    sortByRating();

    
    pair<vector<Item*>::iterator,
        vector<Item*>::iterator> range = equal_range(items.begin(), items.end(), rating, Comp{});

    std::string str;
    std::stringstream strout;
    for (std::vector<Item*>::iterator it = range.first; it != range.second; ++it)
    {
        str = std::to_string((*it)->type) + ' ' + (*it)->name + ' ' + std::to_string((*it)->rating) + ' ' + std::to_string((*it)->price);
        list->push_back(str);
    }
    return list;
}

int Store::countByCompany(std::string company) {
    return count(items.begin(), items.end(), company);
}

void Store::applyDiscount(Item::Type type, int discount) {
    for_each(items.begin(), items.end(), [=](Item* item) {
        if (item->type == type) {
            //cout << "Old price: " << item->price << " ";
            item->price -= discount;
            // cout << "New price: " << item->price << "\n";
        }
    });
}

void Store::addItems(std::vector<Item*> newItems) {
    vector<Item*> full;

    set_union(items.begin(), items.end(),
              newItems.begin(), newItems.end(),
                std::back_inserter(full));

    items = full;
}