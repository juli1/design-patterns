#ifndef __COMPOSITE_HPP__
#define __COMPOSITE_HPP__

#include <list>

#include "model/Element.hpp"

class Composite : public Element
{
	public:
		Composite() {};
		virtual ~Composite() {};
		virtual int getPrice ();
		void addElement (Element* element);
	private:
		std::list<Element*> elements;
};

#endif

