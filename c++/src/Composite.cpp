#include "Composite.hpp"

int Composite::getPrice ()
{
	int total = 0;
	for (Element* e : this->elements)
	{
		total = total + e->getPrice();
	}
	return total;
}

void Composite::addElement (Element* element)
{
	this->elements.push_back (element);
}
