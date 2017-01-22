#include "Builder.hpp"

#include <iostream>

using namespace std;

ToyotaBuilder::ToyotaBuilder ()
{
   _currentCar = new CarToyota();
}

Car* ToyotaBuilder::getCar ()
{
   return _currentCar;
}

void ToyotaBuilder::buildCar ()
{
   cout << "I am building a Toyota" << endl;
}

TeslaBuilder::TeslaBuilder ()
{
   _currentCar = new CarTesla();
}

Car* TeslaBuilder::getCar ()
{
   return _currentCar;
}

void TeslaBuilder::buildCar ()
{
   cout << "I am building a Tesla" << endl;
}



