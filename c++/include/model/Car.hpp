#ifndef __CAR_H__
#define __CAR_H__

#include "Composite.hpp"

class Car : public Composite
{
   public:
      Car ();
		virtual ~Car();
};

class CarTesla : public Car
{
   public:
     CarTesla ();
};

class CarToyota : public Car
{
   public:
      CarToyota ();
		virtual ~CarToyota ();
};

#endif

