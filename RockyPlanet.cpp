/********************************************************************* 
** Author: Shawn Berg
** Date: 8/15/17
** Description: Subclass of Planet.cpp
*********************************************************************/

#include <iostream>
#include "RockyPlanet.hpp"

using namespace std;

RockyPlanet::RockyPlanet(string name)
{
    this->name = name;
    peaceRequirement = "Supplies";
}

void RockyPlanet::peaceOffering()
{
    cout << "Land supplies on " << name << " to make peace (requires Supplies)" << endl;
}

