#pragma once

#include "Item.h"
#include <sstream>
#include "Guitar.h"
#include "Flute.h"
#include "Synth.h"
#include<string>

#include <vector>

class DLL_API Store
{

private:
	std::vector<std::string> splitString(char splitter, std::string str);

public:

	void addItems(std::vector<Item*> newItems);

	int countByCompany(std::string company);//находит кол-во ус-в компании (count)
	std::vector<std::string>* GetStoreForm();
	std::vector<std::string>* GetGuitarsForm();
	std::vector<std::string>* GetSynthsForm();
	std::vector<std::string>* GetFlutesForm();
	std::vector<Flute*> getFlutes();
	std::vector<Synth*> getSynths();
	std::vector<Guitar*> getGuitars();

	void sortByName();//сортировка по параметрам
	void sortByRating();
	void sortByPrice();

	std::vector<std::string>* getByRating(int rating);//equal_range

	void applyDiscount(Item::Type type, int discount);//для расчета скидки применяется функция for_each

	std::vector<Item*> getItems();

	void readFromFile(std::string filename);

	Store();
	~Store();
};

