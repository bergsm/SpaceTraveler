/********************************************************************* 
** Author: Shawn Berg
** Date: 8/9/17
** Description: Header file for SolarSystem.cpp
*********************************************************************/

#ifndef FINALPROJECT_SOLARSYSTEM_HPP
#define FINALPROJECT_SOLARSYSTEM_HPP

#include <iostream>
#include <string>
#include "Planet.hpp"
#include "RockyPlanet.hpp"
#include "GasPlanet.hpp"
#include "Pluto.hpp"
#include "input_validation.hpp"

using namespace std;

class SolarSystem
{
private:
    // Member Variables

    Planet *front;
    Planet *back;

public:
    // Overload Constructor


    // Default Constructor
    SolarSystem();

    // Destructor
    ~SolarSystem();

    // Getters
    int getNumPlanets();

    // Setters


    // Methods
    void addExistingPlanet(Planet*);
    void display();
    bool atPeace();

};

#endif //FINALPROJECT_SOLARSYSTEM_HPP
