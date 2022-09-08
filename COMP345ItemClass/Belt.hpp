//
//  Belt.hpp
//  COMP345ItemClass
//
//  Created by Zongkai Xia on 2016-09-28.
//  Copyright © 2016 Zongkai Xia. All rights reserved.
//

#ifndef Belt_hpp
#define Belt_hpp
#include "Item.hpp"

#include <stdio.h>

using namespace std;

class Belt: public Item {
    int constitution, strength;
    
public:
    Belt(int, int);
    void setConsitution(int);
    void setStrength(int);
    bool setBeltStatus();
    int getStrenght();
    int getConstitution();
    void getBeltStatus();
    ~Belt();
};

#endif /* Belt_hpp */
