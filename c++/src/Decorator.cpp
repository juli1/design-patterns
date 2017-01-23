#include "Decorator.hpp"

Decorator::Decorator (Car* car)
{
	_reference = car;
}


std::string FancyDecorator::showCar ()
{
	return _prefix + Decorator::showCar() + _prefix;
}


std::string Decorator::showCar ()
{
	return _reference->showCar();
}

