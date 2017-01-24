#ifndef __KEY_HPP__
#define __KEY_HPP__

#include "Bridge.hpp"


class ToyotaKey : public BridgeKey
{
	public:
		ToyotaKey ();
};

class TeslaKey : public BridgeKey
{
	public:
		TeslaKey ();
};

class KeyMetal : public BridgeKeyImpl
{
	public:
		KeyMetal () {};
		virtual void open ();
};

class KeyRemote : public BridgeKeyImpl
{
	public:
		KeyRemote () {};
		virtual void open ();
};

#endif

