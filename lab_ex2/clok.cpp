
#include "lab8_2.h"
Clock::Clock():sec(0), min(0), hour(0) {}

int Clock::getSeconds() {
    return sec;
}
int Clock::getHours() {
    return hour;
}
int Clock::getMinute() {
    return min;
}

void Clock::setSeconds(int s) {
    if(sec > 59)
        throw Clock::Second_error();
    this->sec = s;
}
void Clock::setMin(int m) {
    if(hour > 59 )
        throw Clock::Minute_eror();
    this->min = m;
}
void Clock::setHours(int h) {
    if(h > 23 )
        throw Clock::Hourerror();
    this->hour = h;
}

std::ostream& operator<<(std::ostream &os, const Clock &v1)
{
    os<<v1.hour<<":"<<v1.min<<":"<<v1.sec<<"\n";
    return os;
}

AlarmClock::AlarmClock() { this->alarm_clock.push_back(" "); this->alarm_mod = true; }

void AlarmClock::AddAlarm(Clock &time) {

    std::string temp = std::to_string(time.getHours()) + ":" + std::to_string(time.getMinute()) +
            ":" + std::to_string(time.getSeconds());

    alarm_clock.push_back(temp);
    alarm_mod = true;
}

void AlarmClock::eraseAlarm() {
    alarm_clock.clear();
}
void AlarmClock::disableAlarm() {alarm_mod = false;}

void AlarmClock::enableAlarm() { alarm_mod = true;}

std::ostream& operator<<(std::ostream &os, const AlarmClock &time)
{
    if(time.alarm_mod)
    {
        for(std::string t : time.alarm_clock) {
            if (t == " ")
                continue;
            os << "All ALarms are this : \n" << t << std::endl;
        }
    }
    else{
        throw std::logic_error("Please enable the alarm!!");
    }

    return os;
}

