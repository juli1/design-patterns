#include <iostream>
#include "model/Engine.hpp"


void Engine::start ()
{
	std::cout << "starting engine" << std::endl;
}


void Engine::stop ()
{
	std::cout << "stopping engine" << std::endl;
}


void ElectricEngine::start ()
{
	std::cout << "starting electric engine" << std::endl;
}


void ElectricEngine::stop ()
{
	std::cout << "stopping electric engine" << std::endl;
}



void FuelEngine::start ()
{
	std::cout << "starting fuel engine" << std::endl;
}


void FuelEngine::stop ()
{
	std::cout << "stopping fuel engine" << std::endl;
}




