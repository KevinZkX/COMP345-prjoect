//
//  Helmet.hpp
//  COMP345ItemClass
//
//  Created by Zongkai Xia on 2016-09-28.
//  Copyright © 2016 Zongkai Xia. All rights reserved.
//

#ifndef Helmet_hpp
#define Helmet_hpp
#include <iostream>
#include <fstream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "Item.hpp"

#include <stdio.h>

using namespace std;

class Helmet: public Item {
    string armorClass;
    int intelligence, wisdom;
    
public:
    Helmet(string, int, int);
    void setArmorClass(string);
    void setIntelligence(int);
    void setWisdom(int);
    bool setStatus();
    ~Helmet();
};

#endif /* Helmet_hpp */
