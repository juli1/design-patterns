#ifndef __TEMPLATE_HPP__
#define __TEMPLATE_HPP__

class Alarm
{
    public:
        Alarm () {};
        void alarm();
        virtual void doAlarm () {};
};

class NoisyAlarm : public Alarm
{
    public:
        virtual void doAlarm ();
};

class QuietAlarm : public Alarm
{
    public:
        virtual void doAlarm ();
};


#endif

