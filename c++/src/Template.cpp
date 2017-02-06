#include <iostream>

#include "Template.hpp"

void Alarm::alarm()
{
   std::cout << "starting the alarm ... " << std::endl;
   doAlarm();
   std::cout << "... the alarm rang!" << std::endl;
}

void QuietAlarm::doAlarm ()
{
   std::cout << "ALARM ALARM ALARM ALARM" << std::endl;
}


void NoisyAlarm::doAlarm ()
{
   std::cout << " ... a l a r m ..." << std::endl;
}


