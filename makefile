all:
	g++ -g -std=c++0x Game.cpp GasPlanet.cpp input_validation.cpp Item.cpp main.cpp menu.cpp Planet.cpp Pluto.cpp RockyPlanet.cpp Ship.cpp SolarSystem.cpp -o FinalProject

clean:
	rm -f *.o *~ *.out FinalProject