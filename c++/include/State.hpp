#ifndef __STATE_HPP__
#define __STATE_HPP__


class State
{
   public:
      State() {};
      virtual void run() {};
      virtual void speak() {};
      virtual void work() {};
};

class StateAwake : public State
{ 
   public:
      StateAwake() {};
      virtual void run();
      virtual void speak();
      virtual void work();
};


class StateSleep : public State
{ 
   public:
      StateSleep() {};
      virtual void run();
      virtual void speak();
      virtual void work();
};


class StateDrunk : public State
{ 
   public:
      StateDrunk(){};
      virtual void run();
      virtual void speak();
      virtual void work();
};


class Person
{
   public:
      Person() {};
      void wakeUp();
      void goToSleep();
      void drink();
      virtual void run()   {this->_currentState->run();};
      virtual void speak() {this->_currentState->speak();};
      virtual void work()  {this->_currentState->work();};
   private:
      State* _currentState;
};

#endif

