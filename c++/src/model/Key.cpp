#include <iostream>

#include "Bridge.hpp"
#include "model/Key.hpp"

using namespace std;

TeslaKey::TeslaKey ()
{
	_impl = new KeyRemote ();
}

ToyotaKey::ToyotaKey ()
{
	_impl = new KeyMetal ();
}


void KeyMetal::open ()
{
	cout << "open with key metal" << endl;
}


void KeyRemote::open ()
{
	cout << "open with key remote" << endl;
}



