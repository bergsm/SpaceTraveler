/********************************************************************* 
** Author: Shawn Berg
** Date: 8/15/17
** Description: Header file for GasPlanet.cpp
*********************************************************************/

#ifndef FINALPROJECT_GASPLANET_HPP
#define FINALPROJECT_GASPLANET_HPP

#include <iostream>
#include "Planet.hpp"

using namespace std;

class GasPlanet : public Planet
{
private:
    // Member Variables


public:
    // Overload Constructor
    GasPlanet(string name);

    // Default Constructor


    // Destructor


    // Getters


    // Setters


    // Methods
    void peaceOffering();

};

#endif //FINALPROJECT_GASPLANET_HPP
