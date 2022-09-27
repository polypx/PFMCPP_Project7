#pragma once
#include "Character.h"
#include "AttackItem.h"
struct DragonSlayer : public Character
{
    DragonSlayer(std::string , int, int ) ; 
    void attack(Character& other) override;
    const std::string& getName() override;  // rewrite the inherited getName
    std::string getStats() override;        // rewrite the inherited getStats
    std::unique_ptr<AttackItem> attackItem = std::make_unique<AttackItem>(); 
private:
    const std::string name;
};






