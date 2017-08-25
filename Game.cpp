/********************************************************************* 
** Author: Shawn Berg
** Date: 8/15/17
** Description: This file houses the game program and functions
 * for Space Traveler
*********************************************************************/

#include <iostream>
#include "Game.hpp"
#include "menu.hpp"


using namespace std;

Game::Game(SolarSystem* SolarSystemIn, Ship* ShipIn)
{
    gameSolarSystem = SolarSystemIn;
    playerShip = ShipIn;
    finished = false;
}

Game::~Game()
{}

SolarSystem* Game::getSolarSystem()
{
    return gameSolarSystem;
}

bool Game::getFinished()
{
    return finished;
}

void Game::play()
{
    // Objective of the game
    cout << "Welcome Space Traveler! " << endl;
    cout << "The year is 3000 AD. Turmoil has struck the Solar System." << endl;
    cout << "It is your duty to bring peace to the Solar System before you run out of fuel!" << endl;
    cout << "Good luck Space Traveler!" << endl;

    do
    {
        // Display SolarSystem
        gameSolarSystem->display();
        cout << endl;

        // Display Player location and planet status
        playerShip->displayCurrentPlanet();
        playerShip->getCurrentPlanet()->displayPeace();

        bool choiceMade = false;

        // Player action menu
        do switch(menu2(playerShip))
            {
                case 1: // Make peace with planet
                    choiceMade = true;

                    // If player has necessary item
                    if (playerShip->checkForItem(playerShip->getCurrentPlanet()->getPeaceRequirement()) == true)
                        playerShip->getCurrentPlanet()->makePeace();

                    else
                        cout << endl << "You do not have " << playerShip->getCurrentPlanet()->getPeaceRequirement() << "." << endl;

                    break;

                case 2: // Travel to neighboring planets

                    choiceMade = true;

                    playerShip->travel();

                    break;

                case 3: // Pick up planet's item
                    // If planet has an item
                    if (playerShip->getCurrentPlanet()->getPlanetItem() != NULL)
                    playerShip->pickupItem(playerShip->getCurrentPlanet()->getPlanetItem());

                    choiceMade = true;

                    break;
            }
        while (choiceMade == false);
    }
    while(playerShip->getFuel() > 0 && gameSolarSystem->atPeace() == false);

    if (playerShip->getFuel() <=0) // Lose condition
    {
        cout << "You ran out of fuel!!" << endl;
        finished = true;
    }

    if (gameSolarSystem->atPeace() == true) // Win condition
    {
        cout << "You brought peace to the Solar System!!" << endl;
        finished = true;
    }
}


