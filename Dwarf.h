#pragma once
#include "Character.h"

struct Dwarf : public Character
{
    Dwarf(std::string name, int hp, int armor) ; 

    const std::string& getName() override;  // rewrite the inherited getName
    std::string getStats() override;        // rewrite the inherited getStats

private:
    const std::string name;
};
