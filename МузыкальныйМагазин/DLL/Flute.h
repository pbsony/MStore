#pragma once

#include "Item.h"

class DLL_API Flute : public Item
{
public:
    Flute() {};
    Flute(std::string name, int price, int rating) : Item(Type::Flute, name, price, rating)
    {};

};
