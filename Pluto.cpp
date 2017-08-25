/********************************************************************* 
** Author: Shawn Berg
** Date: 8/15/17
** Description: Subclass of Planet.cpp
*********************************************************************/

#include <iostream>
#include "Pluto.hpp"

using namespace std;

Pluto::Pluto()
{
    this->name = "Pluto";
    peaceRequirement = "Planet Declaration Creed";
}

void Pluto::peaceOffering()
{
    cout << "Declare Pluto a planet! (requires Planet Declaration Creed)" << endl;
}

