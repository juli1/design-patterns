#include <iostream>
#include "Car.hpp"
#include "Singleton.hpp"
#include "Factory.hpp"
#include "Builder.hpp"

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
	delete toyotaCar;

	Car* teslaCar = teslaBuilder.getCar();
	cout << "Tesla car" << teslaCar << endl;
	delete teslaCar;
}
