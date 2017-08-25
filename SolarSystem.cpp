/********************************************************************* 
** Author: Shawn Berg
** Date: 8/9/17
** Description:
*********************************************************************/

#include <iostream>
#include "SolarSystem.hpp"

using namespace std;

SolarSystem::SolarSystem()
{

    front = NULL;
    back = NULL;

}

SolarSystem::~SolarSystem()
{}

int SolarSystem::getNumPlanets()
{
    int counter = 0;

    Planet *ptr = front; // start in front

    while (ptr)
    {
        counter++; // count the number of planets

        ptr = ptr->next; // go to next planet
    }

    return counter;
}


void SolarSystem::addExistingPlanet(Planet *newPlanet)
{
    if (front == NULL) // If no planets
        front = newPlanet;

    else // add planet in first available spot
    {
        Planet *ptr = front;
        while(ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = newPlanet;
        newPlanet->prev = ptr;
    }
}

void SolarSystem::display()
{
    cout << endl;

    Planet *ptr = front; // start in front
    while (ptr)
    {
        cout << ptr->name << " "; // Display planet name

        ptr = ptr->next; // go to next planet
    }

    cout << endl;
}

bool SolarSystem::atPeace()
{
    int counter = 0;

    Planet *ptr = front; // start in front

    while (ptr)
    {
        if (ptr->getAtPeace() == true)
        {
            counter++; // count number of at peace planets

            ptr = ptr->next; // go to next planet
        }
        else
            ptr = ptr->next; // go to next planet
    }

    if (counter == SolarSystem::getNumPlanets()) // if all planets are at peace
        return true;
    else
        return false;
}
