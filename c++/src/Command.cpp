#include <iostream>

#include "Command.hpp"

void Invoker::storeCommand (Command* c)
{
	this->_command = c;
}

void Invoker::run()
{
	this->_command->execute();
}

void Client::createCommand (Receiver& receiver, Invoker& invoker)
{
	Command* newCommand = new Command (receiver);
	invoker.storeCommand (newCommand);
}

void Receiver::receiveCommand (Command& command)
{
   std::cout << "I received the command at address " << &command << "!" << std::endl;
}

void Command::execute()
{
   this->_receiver.receiveCommand (*this);
}

