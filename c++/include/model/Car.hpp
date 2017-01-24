#ifndef __CAR_H__
#define __CAR_H__

#include <string>

#include "Composite.hpp"

class Car : public Composite
{
   public:
      Car ();
		virtual std::string showCar();
		virtual ~Car();
};

class CarTesla : public Car
{
   public:
     CarTesla ();
		virtual std::string showCar();
};

class CarToyota : public Car
{
   public:
      CarToyota ();
		virtual ~CarToyota ();
		virtual std::string showCar();
};

#endif

