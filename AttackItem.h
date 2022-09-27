#pragma once
#include "Item.h"

struct AttackItem : Item
{
    AttackItem() : Item("attack item", 10) { }  // special attack item with 'factor' of 10
    void use(Character* character) override;
};

