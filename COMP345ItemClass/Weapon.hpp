//
//  Weapon.hpp
//  COMP345ItemClass
//
//  Created by Zongkai Xia on 2016-09-28.
//  Copyright © 2016 Zongkai Xia. All rights reserved.
//

#ifndef Weapon_hpp
#define Weapon_hpp

#include "Item.hpp"

#include <stdio.h>

using namespace std;

class Weapon: public Item {
    int attackBonus, damageBonus;

public:
    Weapon(int, int);
    void setAttackBonus(int);
    void setDamageBonus(int);
    bool setWeaponStatus();
    int getAttackBonus();
    int getDamageBonus();
    ~Weapon();
};

#endif /* Weapon_hpp */
