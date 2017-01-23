#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include "model/Car.hpp"

class Decorator : public Car
{
	public:
		Decorator (Car* car);
		virtual std::string showCar();

	private:
		Car* _reference;
};

class FancyDecorator : private Decorator
{
	public:
		FancyDecorator (Car* car, std::string prefix) : Decorator (car), _prefix(prefix){};
		virtual std::string showCar();
	private:
		std::string _prefix;
};

#endif

