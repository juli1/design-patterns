#ifndef __SOUNDSYSTEM_HPP__
#define __SOUNDSYSTEM_HPP__

#include "Composite.hpp"
#include "model/Element.hpp"

class SoundSystem : public Composite
{
	public:
		SoundSystem () {};
		virtual ~SoundSystem ();
};

class Speaker : public Element
{
	public:
		Speaker () {};
		virtual int getPrice() {return 10;}
};


class Stereo : public Element
{
	public:
		virtual int getPrice() {return 50;};
		Stereo () {};
};


#endif

