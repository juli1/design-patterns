#include <iostream>

#include "Singleton.hpp"
#include "Factory.hpp"
#include "Builder.hpp"
#include "Adapter.hpp"
#include "Composite.hpp"

#include "model/SoundSystem.hpp"

using namespace std;

int main (int argc __attribute__((unused)), char** argv __attribute__((unused)))
{
	/*
	 * Show use of singleton
	 */
	Singleton* sing1 = Singleton::getInstance();
	Singleton* sing2 = Singleton::getInstance();
	cout << "sing1=" << sing1 << endl;
	cout << "sing2=" << sing2 << endl;

	/*
	 * Use of factory
	 */
	ToyotaFactory myfactory;
	CarToyota* newToyotaCar = myfactory.createCar();

	cout << "new car" << newToyotaCar << endl;

	/**
	 * Use of builder pattern now
	 */
	ToyotaBuilder toyotaBuilder;
	TeslaBuilder  teslaBuilder;
	toyotaBuilder.buildCar();
	teslaBuilder.buildCar();

	Car* toyotaCar = toyotaBuilder.getCar();
	cout << "Toyota car" << toyotaCar << endl;

	Car* teslaCar = teslaBuilder.getCar();
	cout << "Tesla car" << teslaCar << endl;


	/**
	 * Use of Adapter
	 */
	Adapter dviToHdmi;
	std::string adapterOutput = dviToHdmi.sendHdmiSignal();
	cout << adapterOutput << endl;

	/**
	 * Use of composite
	 */
	SoundSystem soundSystem;
	toyotaCar->addElement (&soundSystem);
	soundSystem.addElement (new Speaker());
	soundSystem.addElement (new Speaker());
	soundSystem.addElement (new Stereo());

	cout << "Price of the car (with only stereo) " << toyotaCar->getPrice() << endl;

	delete toyotaCar;
	delete teslaCar;
}
