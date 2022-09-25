#pragma once
#include "Character.h"

struct Dwarf : public Character
{
    Dwarf(std::string , int, int ) ; // why can't I put the full constructor here?

    const std::string& getName() override;  // rewrite the inherited getName
    std::string getStats() override;        // rewrite the inherited getStats

private:
    const std::string name;
};
