#include "Dragon.h"
#include "DragonSlayer.h"
#include "Utility.h"

// did the exact same thing as Dwarf and Paladin

Dragon::Dragon(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 80), name(name_) 
{

}

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

const std::string& Dragon::getName()
{
    return  name;
}

std::string Dragon::getStats()         // using function from Utility.h
{
    return getCharacterStats(this);   // pass the Dragon instance to getCharacterStats
}

