#ifndef __MEDIATOR_HPP__
#define __MEDIATOR_HPP__

#include <list>

class Supplier;

class Mediator
{
	public:
		Mediator () {};
		void addSupplier (Supplier *s);
		bool isFeasible (int limit, int quantity);
	private:
		std::list<Supplier*> _suppliers;
};

class OEM
{
	public:
		OEM (Mediator& mediator, int minPrice) : _mediator(mediator), _minPrice(minPrice) {};
		void negotiate();
	private:
		Mediator& _mediator;
		int _minPrice;
};


class Supplier
{
	public:
		Supplier (int price, int quantity) : _price (price), _quantity(quantity) {};
		int getPrice () {return _price;};
		int getQuantity() { return _quantity;};
	private:
		int _price;
		int _quantity;
};



#endif

