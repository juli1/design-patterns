#include "model/Car.hpp"


Car::Car()
{
}

CarTesla::CarTesla ()
{
}

CarToyota::CarToyota ()
{
}

CarToyota::~CarToyota ()
{
}

Car::~Car ()
{
}

std::string Car::showCar ()
{
	return " UNKNOWN ";
}

std::string CarToyota::showCar ()
{
	return " TOYOTA ";
}

std::string CarTesla::showCar ()
{
	return " TOYOTA ";
}



