#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(std::string name, int hp, int armour) : Character(hp, armour, 0), name(name)
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

