//
//  Boots.hpp
//  COMP345ItemClass
//
//  Created by Zongkai Xia on 2016-09-28.
//  Copyright © 2016 Zongkai Xia. All rights reserved.
//

#ifndef Boots_hpp
#define Boots_hpp

#include "Item.hpp"
#include <stdio.h>

using namespace std;

class Boots: public Item {
    string armorClass;
    int dexterity;
    
public:
    Boots(string, int);
    void setArmorClass(int);
    void setDexterity(int);
    bool setBeltStatus();
    string getArmorClass();
    int getDexterity();
    
    ~Boots();
};

#endif /* Boots_hpp */
