#include "Singleton.hpp"

Singleton* Singleton::INSTANCE = nullptr;

Singleton* Singleton::getInstance ()
{
	if (Singleton::INSTANCE == nullptr)
	{
		Singleton::INSTANCE = new Singleton();
	}
	return Singleton::INSTANCE;
}
