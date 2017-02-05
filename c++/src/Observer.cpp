#include "Observer.hpp"

void PriceObserver::update (GasStation* station)
{
	_minPrice = std::min(_minPrice, station->getPrice());
}

void GasStation::updatePrice (int price)
{
	_price = price;
	for (PriceObserver* po : _observers)
	{
		po->update (this);
	}
}


