#pragma once
#include "Item.h"

class DLL_API Synth : public Item
{
public:
    Synth() {}
    Synth(std::string name, int price, int rating) : Item(Type::Synth, name, price, rating)
    {};
};
