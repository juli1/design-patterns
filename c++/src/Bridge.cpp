#include <iostream>

#include "Bridge.hpp"

using namespace std;

void BridgeKey::openCar ()
{
	cout << "Open the car ..." << endl;
	_impl->open ();
	cout << "... car opened!" << endl;
}
