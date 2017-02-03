#ifndef __CHAIN_OF_RESPONSIBILITY__
#define __CHAIN_OF_RESPONSIBILITY__

class CarStarter {
   public:
      CarStarter (CarStarter* next) : _next (next) {};
      virtual void startCar();
   private:
      CarStarter* _next;
};

class KeyRemoteStarter : public CarStarter
{
   public:
      KeyRemoteStarter (CarStarter* s) : CarStarter (s) {};
};

class KeyReceiverStarter : public CarStarter
{
   public:
      KeyReceiverStarter (CarStarter* s) : CarStarter (s) {};
};

class CarStartingRemotely : public CarStarter
{
   public:
      CarStartingRemotely (CarStarter* s) : CarStarter (s) {};
      virtual void startCar();
};

#endif

