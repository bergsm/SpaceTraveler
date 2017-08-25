/********************************************************************* 
** Author: Shawn Berg
** Date: 8/9/17
** Description: The main function for Space Traveler. This program allows
 * a player to attempt to bring peace to the Solar System!
*********************************************************************/

#include <iostream>
#include "Game.hpp"
#include "menu.hpp"

using namespace std;

int main()
{

    // Declare SolarSystem
    SolarSystem Sol;

    // Declare player's ship
    Ship playerShip;

    // Declare the planets for the Solar System
    RockyPlanet Mercury("Mercury");
    RockyPlanet Venus("Venus");
    RockyPlanet Earth("Earth");
    RockyPlanet Mars("Mars");
    GasPlanet Jupiter("Jupiter");
    GasPlanet Saturn("Saturn");
    GasPlanet Uranus("Uranus");
    GasPlanet Neptune("Neptune");
    Pluto Pluto;

    // Add the planets to the Solar System
    Sol.addExistingPlanet(&Mercury);
    Sol.addExistingPlanet(&Venus);
    Sol.addExistingPlanet(&Earth);
    Sol.addExistingPlanet(&Mars);
    Sol.addExistingPlanet(&Jupiter);
    Sol.addExistingPlanet(&Saturn);
    Sol.addExistingPlanet(&Uranus);
    Sol.addExistingPlanet(&Neptune);
    Sol.addExistingPlanet(&Pluto);

    // Create the items in the game
    Item Supplies("Supplies");
    Item AtmosphereStabilizer("Atmosphere Stabilizer");
    Item PlanetCreed("Planet Declaration Creed");

    // Start the player on Earth
    playerShip.setCurrentPlanet(&Earth);
    Earth.setPeace(true);

    // Give Earth supplies
    Earth.setPlanetItem(&Supplies);

    // Give Mars the atmosphere stablilizer
    Mars.setPlanetItem(&AtmosphereStabilizer);

    // Give Neptune the planet creed
    Neptune.setPlanetItem(&PlanetCreed);

    // Create a new game
    Game game(&Sol, &playerShip);

    bool userQuit = false;

    // Main menu
    do switch(menu1())
        {
            case 1: // Play game
                game.play();
                break;

            case 2: // Quit
                userQuit = true;
                return 0;

        }
    while(userQuit == false && game.getFinished() == false);

    return 0;
}
