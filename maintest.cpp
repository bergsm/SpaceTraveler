/********************************************************************* 
** Author: Shawn Berg
** Date: 8/14/17
** Description:
*********************************************************************/

#include <iostream>
#include "SolarSystem.hpp"
#include "Ship.hpp"

using namespace std;

int main()
{


    /*SolarSystem Sol;

    Sol.addNewPlanet("Mercury");
    Sol.addNewPlanet("Venus");
    Sol.addNewPlanet("Earth");
    Sol.addNewPlanet("Mars");
    Sol.addNewPlanet("Jupiter");
    Sol.addNewPlanet("Saturn");
    Sol.addNewPlanet("Uranus");
    Sol.addNewPlanet("Neptune");
    Sol.addNewPlanet("Pluto");

    Sol.display();*/

    /*SolarSystem Sol2;

    Planet Mercury("Mercury");
    Planet Venus("Venus");
    Planet Earth("Earth");
    Planet Mars("Mars");
    Planet Jupiter("Jupiter");
    Planet Saturn("Saturn");
    Planet Uranus("Uranus");
    Planet Neptune("Neptune");
    Planet Pluto("Pluto");

    Sol2.addExistingPlanet(&Mercury);
    Sol2.addExistingPlanet(&Venus);
    Sol2.addExistingPlanet(&Earth);
    Sol2.addExistingPlanet(&Mars);
    Sol2.addExistingPlanet(&Jupiter);
    Sol2.addExistingPlanet(&Saturn);
    Sol2.addExistingPlanet(&Uranus);
    Sol2.addExistingPlanet(&Neptune);
    Sol2.addExistingPlanet(&Pluto);

    Sol2.display();*/

    Ship testShip3;
    Item testItem1("test");
    Item testItem2("fail");
    Planet testPlanet("Test");

    /*testShip3.setCurrentPlanet(&Earth);
    testShip3.getCurrentPlanet();
    testShip3.getCurrentPlanet()->getAtPeace();

    Mercury.unlock();
    Mars.unlock();
    Pluto.unlock();

    Sol2.display();

    Earth.makePeace();
    Saturn.makePeace();
    Mars.makePeace();

    Sol2.display();



    testShip3.travel();
    testShip3.getCurrentPlanet()->getAtPeace();
    cout << testShip3.getFuel() << endl;*/


    //cout << Sol2.getNumPlanets() << " Planets" << endl;

    //testShip3.getCurrentPlanet();*/

    testShip3.checkForItem("test");

    testShip3.pickupItem(testItem1);
    testShip3.pickupItem(testItem2);

    testShip3.checkForItem("test");

    testPlanet.makePeace(testItem2);
    testPlanet.makePeace(testItem1);




    return 0;
}
