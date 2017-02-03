#ifndef __COMMAND_HPP__
#define __COMMAND_HPP__

class Receiver;

class Command
{
	public:
		Command (Receiver& r) : _receiver (r){};
		void execute ();
	private:
		Receiver& _receiver;
};

class Receiver
{
	public:
		Receiver () {};
		virtual void receiveCommand (Command& command);
};

class Invoker
{
	public:
		Invoker() {};
		void storeCommand (Command* c);
		void run();
	private:
		Command* _command;

};

class Client
{
	public:
		Client () {};
		void createCommand (Receiver& receiver, Invoker& invoker);
};


#endif

