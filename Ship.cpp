/********************************************************************* 
** Author: Shawn Berg
** Date: 8/9/17
** Description: This class holds the functions and variables for the player's
 * ship in Space Traveler
*********************************************************************/

#include <iostream>
#include "Ship.hpp"

using namespace std;

Ship::Ship()
{
    fuel = 20;
}

Ship::~Ship()
{}

int Ship::getFuel()
{
    return fuel;
}

Planet* Ship::getCurrentPlanet()
{
    return this->currentPlanet;
}

void Ship::setCurrentPlanet(Planet* currentPlanet)
{
    this->currentPlanet = currentPlanet;
}

bool Ship::checkForItem(string itemName)
{
    for (int i=0; i<cargo.size(); i++) // iterate through cargo
    {
        if (itemName == cargo[i]->getName()) // check for item
        {
            return true;
        }
    }
    return false;
}

void Ship::pickupItem(Item* newItem)
{
    if (currentPlanet->getAtPeace() == true && cargo.size() < 4) // if planet is at peace
    {
        cargo.push_back(newItem); // add item to cargo
        cout << "You added "
             << currentPlanet->getPlanetItem()->getName()
             << " to your inventory." << endl;
    }
    else
        cout << currentPlanet->getName() << " refuses to give you " << currentPlanet->getPlanetItem()->getName() << "." << endl;
}

void Ship::travel()
{
    int input = 0;

    cout << "Which planet do you wish to travel to?" << endl;

    if (currentPlanet->getPrevPlanet() != NULL) // If previous planet available
        cout << "1) " << currentPlanet->getPrevPlanet()->getName() << endl;

    if (currentPlanet->getNextPlanet() != NULL) // if next planet available
        cout << "2) " << currentPlanet->getNextPlanet()->getName() << endl;

        cout << "3) Cancel" << endl;

    input = intValid(1, 3);

    if (input == 1 && currentPlanet->getPrevPlanet() != NULL)
    {
        if (currentPlanet->getPrevPlanet()->getLocked() == false)
        {
            currentPlanet = currentPlanet->getPrevPlanet(); // move to prev planet
            fuel--;
        }
            else
            cout << "You are currently banned from " << currentPlanet->getNextPlanet()->getName() << endl;

    }
    else if (input == 2 && currentPlanet->getNextPlanet() != NULL)
    {
        if (currentPlanet->getNextPlanet()->getLocked() == false)
        {
            currentPlanet = currentPlanet->getNextPlanet(); // move to next planet
            fuel--;
        }
        else
            cout << "You are currently banned from " << currentPlanet->getPrevPlanet()->getName() << endl;
    }
}

void Ship::displayCurrentPlanet()
{
    cout << "Your ship is located at: " << currentPlanet->getName() << endl;
    cout << "You have " << fuel << " gallons of fuel remaining." << endl;
}

