#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include "model/Car.hpp"

class Factory
{
	public:
		Factory();
		virtual Car* createCar() {return nullptr;};
};

class ToyotaFactory : public Factory
{
	public:
		CarToyota* createCar ();
		ToyotaFactory ();
};

#endif

