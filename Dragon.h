#pragma once
#include "Character.h"

struct Dragon : public Character
{
    void attack(Character& other) override;

    Dragon(std::string , int, int ) ; 

    const std::string& getName() override;  // rewrite the inherited getName
    std::string getStats() override;        // rewrite the inherited getStats

private:
    const std::string name;
};


