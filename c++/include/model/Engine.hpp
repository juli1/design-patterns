#ifndef __ENGINE_HPP__
#define __ENGINE_HPP__

class Engine
{
	public:
	Engine () {};
	virtual void start();
	virtual void stop();
};

class ElectricEngine : public Engine
{
	public:
	ElectricEngine () {};
	virtual void start();
	virtual void stop();
};

class FuelEngine : public Engine
{
	public:
		FuelEngine () {};
		virtual void start();
		virtual void stop();
};

#endif

