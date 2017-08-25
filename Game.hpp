/********************************************************************* 
** Author: Shawn Berg
** Date: 8/15/17
** Description:
*********************************************************************/

#ifndef FINALPROJECT_GAME_HPP
#define FINALPROJECT_GAME_HPP

#include <iostream>
#include "SolarSystem.hpp"
#include "Ship.hpp"

using namespace std;

class Game
{
private:
    // Member Variables
    SolarSystem* gameSolarSystem;
    Ship* playerShip;
    bool finished;

public:
    // Overload Constructor


    // Default Constructor
    Game(SolarSystem*, Ship*);

    // Destructor
    ~Game();

    // Getters
    SolarSystem* getSolarSystem();
    bool getFinished();

    // Setters


    // Methods
    void play();

};

#endif //FINALPROJECT_GAME_HPP
