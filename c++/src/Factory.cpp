#include "Factory.hpp"


CarToyota* ToyotaFactory::createCar ()
{
	CarToyota* newCar = new CarToyota();
	return newCar;
}

ToyotaFactory::ToyotaFactory ()
{
}

Factory::Factory ()
{
}


