#ifndef __BRIDGE_HPP__
#define __BRIDGE_HPP__


class BridgeKeyImpl
{
	public:
		BridgeKeyImpl () {};
		virtual void open () {};
};

class BridgeKey
{
	public:
		BridgeKey () {};
		virtual void openCar();
	protected:
		BridgeKeyImpl* _impl;
};


#endif

