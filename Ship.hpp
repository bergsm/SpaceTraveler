/********************************************************************* 
** Author: Shawn Berg
** Date: 8/9/17
** Description: Header file for Ship.hpp
*********************************************************************/

#ifndef FINALPROJECT_SHIP_HPP
#define FINALPROJECT_SHIP_HPP

#include <iostream>
#include <vector>
#include "SolarSystem.hpp"
#include "Item.hpp"

using namespace std;

class Ship
{
private:
    // Member Variables
    int fuel;
    vector<Item*> cargo;
    Planet* currentPlanet;


public:
    // Overload Constructor


    // Default Constructor
    Ship();


    // Destructor
    ~Ship();

    // Getters
    int getFuel();
    Planet* getCurrentPlanet();


    // Setters
    void setCurrentPlanet(Planet*);

    // Methods
    bool checkForItem(string);
    void pickupItem(Item*);
    void travel();
    void displayCurrentPlanet();


};

#endif //FINALPROJECT_SHIP_HPP
