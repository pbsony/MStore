#pragma once

#include "Item.h"

class DLL_API Guitar : public Item
{
public:
    Guitar() {};
    Guitar(std::string name, int price, int rating) : Item(Type::Guitar, name, price, rating)
    {};
};
