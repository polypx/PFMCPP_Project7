#pragma once

#include "Character.h"

struct Dwarf : public Character
{
    Dwarf(std::string n, int hp, int arm);

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
