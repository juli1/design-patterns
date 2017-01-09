#ifndef __SINGLETON_HPP__
#define __SINGLETON_HPP__

class Singleton;

class Singleton
{
	public:
		static Singleton* getInstance ();

	private:
		static Singleton* INSTANCE;
};

#endif

