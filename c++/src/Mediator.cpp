#include <iostream>

#include "Mediator.hpp"



void OEM::negotiate ()
{
	bool result = _mediator.isFeasible (_minPrice, 100);

	if (result)
	{
		std::cout << "I can have 100 items at my price " << _minPrice << std::endl;
	}
	else
	{
		std::cout << "I CANNOT have 100 items at my price " << _minPrice << std::endl;
	}
}

void Mediator::addSupplier (Supplier* s)
{
	_suppliers.push_back (s);
}

bool Mediator::isFeasible (int limit, int quantity)
{
	for (Supplier* s : _suppliers)
	{
		if ((s->getPrice() <= limit) && (s->getQuantity() >= quantity))
		{
			return true;
		}
	}
	return false;
}
