/********************************************************************* 
** Author: Shawn Berg
** Date: 8/15/17
** Description: Subclass of Planet.cpp
*********************************************************************/

#include <iostream>
#include "GasPlanet.hpp"

using namespace std;

GasPlanet::GasPlanet(string name)
{
    this->name = name;
    peaceRequirement = "Atmosphere Stabilizer";
}

void GasPlanet::peaceOffering()
{
    cout << "Stabilize " << name << "'s atmosphere (requires Atmosphere Stabilizer)" << endl;
}
