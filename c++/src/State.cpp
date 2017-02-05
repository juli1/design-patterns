#include <iostream>

#include "State.hpp"

void Person::wakeUp ()
{
   this->_currentState = new StateAwake ();
}

void Person::goToSleep ()
{
   this->_currentState = new StateSleep ();
}

void Person::drink ()
{
   this->_currentState = new StateDrunk ();
}

void StateDrunk::run ()
{
   std::cout << "I cannot run - I am too drunk!" << std::endl;
}

void StateDrunk::speak ()
{
   std::cout << "BlA bLA bLa BLa" << std::endl;
}

void StateDrunk::work ()
{
   std::cout << "WTF is this!" << std::endl;
}


void StateSleep::run ()
{
   throw "I cannot run!";
}

void StateSleep::speak ()
{
   throw "I cannot speak!";
}

void StateSleep::work ()
{
   throw "I cannot work now!";
}

void StateAwake::run ()
{
   std::cout << "I run 6 miles!" << std::endl;
}

void StateAwake::speak ()
{
   std::cout << "bla bla bla" << std::endl;
}

void StateAwake::work ()
{
   std::cout << "This is a producive day" << std::endl;
}
