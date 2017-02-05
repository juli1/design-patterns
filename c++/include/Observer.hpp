#ifndef __OBSERVER_HPP__
#define __OBSERVER_HPP__

#include <list>

class GasStation;

class PriceObserver
{
	public:
		PriceObserver () : _minPrice (500){};
		void update (GasStation* station);
		int getMinPrice() {return this->_minPrice;}
	private:
		int _minPrice;
};

class GasStation
{
	public:
		GasStation () : _price (0) {};
		void addObserver (PriceObserver* observer) {_observers.push_back(observer);}
		void updatePrice (int price);
		int getPrice() { return this->_price;}
	private:
		std::list<PriceObserver*> _observers;
		int _price;
};

#endif

