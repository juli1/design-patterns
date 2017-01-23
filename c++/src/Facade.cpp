#include "Facade.hpp"
#include "model/Engine.hpp"
#include "model/Car.hpp"
#include "model/Brake.hpp"

FacadeDriving::FacadeDriving ()
{
}

void FacadeDriving::startTrip ()
{
	CarToyota car;
	FuelEngine engine;
	Brake brake;

	engine.start();
	brake.action();
	engine.stop();
}
