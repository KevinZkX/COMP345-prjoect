//
//  Item.hpp
//  COMP345ItemClass
//
//  Created by Zongkai Xia on 2016-09-28.
//  Copyright © 2016 Zongkai Xia. All rights reserved.
//

#ifndef Item_hpp
#define Item_hpp
#include <iostream>
#include <fstream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <stdio.h>

using namespace std;

class Item {
    static int itemID;
    int enchantBonus = 0;
    
public:
    Item();
    int getItemID();
    void setEnchaBonus(int);
    void loadTexture(string);
    ~Item();
};

#endif /* Item_hpp */
