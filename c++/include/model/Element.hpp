#ifndef __ELEMENT_HPP__
#define __ELEMENT_HPP__

class Element
{
	public:
		Element() {};
		virtual ~Element() {};
		virtual int getPrice() {return 0;}
};

#endif

