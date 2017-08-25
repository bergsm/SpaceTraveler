/********************************************************************* 
** Author: Shawn Berg
** Date: 7/6/17
** Description: Menu for programs
*********************************************************************/

#include <iostream>
#include "menu.hpp"


using namespace std;

int menu1()
{

    int selection = 0;

    // Menu
    cout << endl << "Space Traveler!" << endl << endl;

    // 1) Start program
        cout << "1) Play" << endl << endl;


        cout << "2) Quit" << endl << endl;


        cout << "Select an option and press [enter]" << endl;

    selection = intValid(1, 2);


    return selection;
}

int menu2(Ship* playerShip)
{
    int selection = 0;

    cout << endl << "What would you like to do?" << endl << endl;

    if (playerShip->getCurrentPlanet()->getAtPeace() == false)
    {
        cout << "1) ";
        playerShip->getCurrentPlanet()->peaceOffering();
        cout << endl;
    }

    cout << "2) Travel to neighboring planet (1 gallon of fuel required)" << endl << endl;

    // if player does not already have item
    if (playerShip->getCurrentPlanet()->getPlanetItem() != NULL  && playerShip->checkForItem(playerShip->getCurrentPlanet()->getPlanetItem()->getName()) == false)
    {
        cout << "3) Collect "
             << playerShip->getCurrentPlanet()->getPlanetItem()->getName()
             << " (requires " << playerShip->getCurrentPlanet()->getName()
             << " to be at peace.)" << endl << endl;
    }

    cout << "Select an option and press [enter]" << endl;

    selection = intValid(1, 3);

    return selection;
}

