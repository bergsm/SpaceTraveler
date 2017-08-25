/********************************************************************* 
** Author: Shawn Berg
** Date: 8/16/17
** Description: Item class for Space Traveler
*********************************************************************/

#include <iostream>
#include "Item.hpp"

using namespace std;

Item::Item(string name)
{
    this->name = name;
}

Item::~Item()
{}

string Item::getName()
{
    return name;
}
