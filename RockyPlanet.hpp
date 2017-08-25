/********************************************************************* 
** Author: Shawn Berg
** Date: 8/15/17
** Description: Header file for RockyPlanet.cpp
*********************************************************************/

#ifndef FINALPROJECT_ROCKYPLANET_HPP
#define FINALPROJECT_ROCKYPLANET_HPP

#include <iostream>
#include "Planet.hpp"

using namespace std;

class RockyPlanet : public Planet
{
private:
    // Member Variables


public:
    // Overload Constructor
    RockyPlanet(string name);

    // Default Constructor


    // Destructor


    // Getters


    // Setters


    // Methods
    void peaceOffering();

};

#endif //FINALPROJECT_ROCKYPLANET_HPP
