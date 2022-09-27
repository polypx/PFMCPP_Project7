#pragma once

#include <string>

struct Character;
struct Item
{
    Item(const std::string& name_, int effect ); // move constructor to Item.cpp
    virtual ~Item();
    virtual void use(Character*) = 0;
    
    inline const std::string& getName() { return name; }
    inline int getBoost() const { return boost; }

private:
    std::string name;
    int boost;
};
