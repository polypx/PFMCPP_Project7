#include "Paladin.h"
#include "Utility.h"

// did the exact same thing as Dwarf, with Paladin

Paladin::Paladin(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 10), name(name_) 
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6);
}

const std::string& Paladin::getName()
{
    return  name;
}

std::string Paladin::getStats()         // using function from Utility.h
{
    return getCharacterStats(this);   // pass the Paladin instance to getCharacterStats
}

