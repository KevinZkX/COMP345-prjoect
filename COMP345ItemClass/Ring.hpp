//
//  Ring.hpp
//  COMP345ItemClass
//
//  Created by Zongkai Xia on 2016-09-28.
//  Copyright © 2016 Zongkai Xia. All rights reserved.
//

#ifndef Ring_hpp
#define Ring_hpp

#include "Item.hpp"
#include <stdio.h>

using namespace std;

class Ring: public Item {
    int strength, constitution, wisdom, charisma;
    string armorClass;
    
public:
    Ring(string, int, int, int, int);
    void setArmorClass(string);
    void setStrength(int);
    void setConstitution(int);
    void setWisdom(int);
    void setCharisma(int);
    bool setRingStatus();
    string getArmorClass();
    int getStrength();
    int setConstitution();
    int setWisdom();
    int setCharisma();
    void getRingStatus();
    ~Ring();
};

#endif /* Ring_hpp */
