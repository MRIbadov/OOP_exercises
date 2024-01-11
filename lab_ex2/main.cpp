#include <iostream>
#include "lab8_2.h"
int main() {
    Clock v1;
    v1.setHours(2);
    v1.setMin(21);
    v1.setSeconds(59);
    std::cout<<v1;
    AlarmClock v2;
    v2.AddAlarm(v1);
    std::cout<<v2;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
