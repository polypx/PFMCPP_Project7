#pragma once
#include "Character.h"

struct DragonSlayer : public Character
{
    DragonSlayer(std::string , int, int ) ; 
    void attack(Character& other) override;
    const std::string& getName() override;  // rewrite the inherited getName
    //std::string getStats() override;        // rewrite the inherited getStats

private:
    const std::string name;
};






