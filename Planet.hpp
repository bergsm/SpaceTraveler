/********************************************************************* 
** Author: Shawn Berg
** Date: 8/9/17
** Description: Header file for Planet.cpp
*********************************************************************/

#ifndef FINALPROJECT_PLANET_HPP
#define FINALPROJECT_PLANET_HPP

#include <iostream>
#include <string>
#include "Item.hpp"

using namespace std;

class Planet
{

    friend class SolarSystem;

private:

protected:
    // Member Variables
    bool locked;
    bool atPeace;
    // TODO vector with items (random?)
    string name;

    Item* planetItem;

    string peaceRequirement;


    Planet *next;
    Planet *prev;
    Planet *up;
    Planet *down;

public:
    // Overload Constructor
    Planet(string name);

    // Default Constructor
    Planet();

    // Destructor
    virtual ~Planet();

    // Getters
    bool getLocked();
    bool getAtPeace();
    string getName();
    Planet* getNextPlanet();
    Planet* getPrevPlanet();
    string getPeaceRequirement();
    Item* getPlanetItem();

    // Setters
    void setPlanetItem(Item*);
    void setPeace(bool);

    // Methods
    void makePeace();
    void unlock();
    void displayPeace();
    virtual void peaceOffering()=0;


};

#endif //FINALPROJECT_PLANET_HPP
