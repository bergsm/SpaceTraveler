/********************************************************************* 
** Author: Shawn Berg
** Date: 8/16/17
** Description: Header file for Item.cpp
*********************************************************************/

#ifndef FINALPROJECT_ITEM_HPP
#define FINALPROJECT_ITEM_HPP

#include <iostream>
#include <string>

using namespace std;

class Item
{
private:
    // Member Variables
    string name;

public:
    // Overload Constructor


    // Default Constructor
    Item(string name);

    // Destructor
    ~Item();

    // Getters
    string getName();

    // Setters


    // Methods

};

#endif //FINALPROJECT_ITEM_HPP
