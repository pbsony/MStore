#pragma once

#include "DLL.h"

#include <string>

class DLL_API Item
{
public:
    enum Type { Guitar = 1, Synth, Flute };

    Item::Type type;
    std::string name;
    int price;
    int rating;

    Item() {};
    Item(Item::Type type, std::string name, int price, int rating) :type(type), name(name), price(price), rating(rating) {};

    virtual~Item() {}

    friend bool operator==(Item* item, std::string company) {
        return item->name.substr(0, item->name.find(' ')) == company;
    }
    friend bool operator==(Item left, Item right) {
        return left.name == right.name;
    }
};

