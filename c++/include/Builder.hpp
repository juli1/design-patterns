#ifndef __BUILDER_HPP__
#define __BUILDER_HPP__

#include "model/Car.hpp"

class Builder
{
   public:
      virtual void buildCar() {};
      virtual Car* getCar() {return nullptr;};

   protected:
      Builder() {};
};

class ToyotaBuilder : public Builder
{
   public:
      virtual Car* getCar();
      virtual void buildCar();
      ToyotaBuilder ();
   private:
      Car* _currentCar;
};


class TeslaBuilder : public Builder
{
   public:
      virtual Car* getCar();
      virtual void buildCar();
      TeslaBuilder ();
   private:
      Car* _currentCar;
};


#endif

