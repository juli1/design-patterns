#include "iostream"
#include "Car.hpp"
#include "Singleton.hpp"
#include "Factory.hpp"

using namespace std;

int main (int argc __attribute__((unused)), char** argv __attribute__((unused)))
{
	Singleton* sing1 = Singleton::getInstance();
	Singleton* sing2 = Singleton::getInstance();
	cout << "sing1=" << sing1 << endl;
	cout << "sing2=" << sing2 << endl;
	ToyotaFactory myfactory;
	CarToyota* newToyotaCar = myfactory.createCar();

	cout << "new car" << newToyotaCar << endl;
	
}
