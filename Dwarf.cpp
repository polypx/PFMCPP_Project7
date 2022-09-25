#include "Dwarf.h"
#include "Utility.h"

// constructor ,  base constructor passed two values from derived class (hp_ and armor_)
//                                                            THEN passed it's own name_
Dwarf::Dwarf(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 0), name(name_) 
{

}

const std::string& Dwarf::getName()
{
    return  name;
}

std::string Dwarf::getStats()         // using function from Utility.h
{
    return getCharacterStats(this);   // pass the Dwarf instance to getCharacterStats
}

