#include "Paladin.h"
#include "Utility.h"

// did the exact same thing as Dwarf, with Paladin

Paladin::Paladin(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 10), name(name_) 
{

}

const std::string& Paladin::getName()
{
    return  name;
}

std::string Paladin::getStats()         // using function from Utility.h
{
    return getCharacterStats(this);   // pass the Paladin instance to getCharacterStats
}

