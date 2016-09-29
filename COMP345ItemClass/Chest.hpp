//
//  Chest.hpp
//  COMP345ItemClass
//
//  Created by Zongkai Xia on 2016-09-28.
//  Copyright © 2016 Zongkai Xia. All rights reserved.
//

#ifndef Chest_hpp
#define Chest_hpp

#include <stdio.h>
#include "Item.hpp"

using namespace std;

class Chest: public Item {
    
    string armorClass;
    
public:
    Chest(string armorClass);
    bool setChestArmorClass(string armorClass);
    bool addChestTexture(string fileName);
    ~Chest();
};

#endif /* Chest_hpp */
