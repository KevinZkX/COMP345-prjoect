//
//  Item.cpp
//  COMP345ItemClass
//
//  Created by Zongkai Xia on 2016-09-28.
//  Copyright © 2016 Zongkai Xia. All rights reserved.
//

#include "Item.hpp"

Item::Item() {
    itemID += 1;
    enchantBonus = 0;
}

int Item:: getItemID() {
    int temp;
    temp = itemID;
    return temp;
}

void Item::setEnchaBonus(int ench) {
    enchantBonus = ench;
}

void Item::loadTexture(string imagePath) {
    
}
