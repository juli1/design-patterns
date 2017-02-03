#include <iostream>

#include "ChainOfResponsibility.hpp"


using namespace std;

void CarStartingRemotely::startCar () 
{
   std::cout << "Car is starting from remotely !" << std::endl;
}

void CarStarter::startCar () 
{
   if (this->_next != nullptr)
   {
      _next->startCar();
   }
}
