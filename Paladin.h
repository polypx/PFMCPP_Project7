#pragma once
#include "Character.h"

struct Paladin : public Character
{
    Paladin(std::string , int, int ) ; 

    const std::string& getName() override;  // rewrite the inherited getName
    std::string getStats() override;        // rewrite the inherited getStats

private:
    const std::string name;
};


