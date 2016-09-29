//
//  Shield.hpp
//  COMP345ItemClass
//
//  Created by Zongkai Xia on 2016-09-28.
//  Copyright © 2016 Zongkai Xia. All rights reserved.
//

#ifndef Shield_hpp
#define Shield_hpp
#include "Item.hpp"

#include <stdio.h>

using namespace std;

class Shield: public Item {
    string armorClass;
    
public:
    Shield(string);
    bool setArmorClass(string);
    bool getArmorClass(string);
    ~Shield();
};

#endif /* Shield_hpp */
