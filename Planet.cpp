/********************************************************************* 
** Author: Shawn Berg
** Date: 8/9/17
** Description: Planet Class for Space Traveler
*********************************************************************/

#include <iostream>
#include "Planet.hpp"

using namespace std;


Planet::Planet(string name)
{
    locked = false;
    atPeace = false;

    Planet *next = NULL;
    Planet *prev = NULL;

    this->name = name;

    planetItem = NULL;

    this->next = next;
    this->prev = prev;

    up = NULL;
    down = NULL;
}

Planet::Planet()
{
    locked = false;
    atPeace = false;

    Planet *next = NULL;
    Planet *prev = NULL;

    this->name = name;
    peaceRequirement = "test";

    planetItem = NULL;


    this->next = next;
    this->prev = prev;

    up = NULL;
    down = NULL;
}



Planet::~Planet()
{}

bool Planet::getLocked()
{
    if (locked == true)
    {
        return true;
    }

    else
    {
        return false;
    }
}

bool Planet::getAtPeace()
{
    if (atPeace == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string Planet::getName()
{
    return name;
}

Planet* Planet::getNextPlanet()
{
    return this->next;
}

Planet* Planet::getPrevPlanet()
{
    return this->prev;
}

string Planet::getPeaceRequirement()
{
    return peaceRequirement;
}

Item* Planet::getPlanetItem()
{
    return planetItem;
}

void Planet::setPlanetItem(Item* planetItem)
{
    this->planetItem = planetItem;
}

void Planet::setPeace(bool setting)
{
    atPeace = setting;
}

void Planet::makePeace()
{
    atPeace = true;
}

void Planet::unlock()
{
    locked = false;
}

void Planet::displayPeace()
{
    if (atPeace == true)
    {
        cout << name << " is at peace" << endl;
    }
    else
    {
        cout << name << " is not a peace" << endl;
    }
}

void Planet::peaceOffering()
{
    cout << "Make peace with " << name << endl;
}