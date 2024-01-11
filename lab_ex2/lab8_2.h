
#ifndef UNTITLED3_LAB8_2_H
#define UNTITLED3_LAB8_2_H
#include <iostream>
#include <stdexcept>
#include <list>
#include <string>
class Clock {
protected:
    int sec;
    int min;
    int hour;

public:
    class Hourerror: public std::logic_error{
    public:
        Hourerror(): std::logic_error("OverFlows for hour"){};
    };
    class Minute_eror:public std::logic_error{
    public:
        Minute_eror(): std::logic_error("OwerFlows for minute"){};
    };
    class Second_error:public std::logic_error{
    public:
        Second_error(): std::logic_error("Owerflows for seconds"){};
    };
    //Clock(int _sec, int _min, int hour);
    Clock();
    int getHours();
    int getMinute();
    int getSeconds();
    void setHours(int h);
    void setMin(int m);
    void setSeconds(int s);
    friend std::ostream& operator<<(std::ostream&os, const Clock &v1);

};

class AlarmClock : public Clock{
protected:
    std::list<std::string> alarm_clock;
    bool alarm_mod;
public:
    AlarmClock();
    void AddAlarm(Clock &time);
    void eraseAlarm();
    void disableAlarm();
    void enableAlarm();
    void display_currentime();
    friend std::ostream& operator<<(std::ostream &os, const AlarmClock &v1);
};
#endif