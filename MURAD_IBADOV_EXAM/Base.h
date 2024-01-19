
#ifndef MURAD_IBADOV_BASE_H
#define MURAD_IBADOV_BASE_H
#include <iostream>
#include <algorithm>
#include <vector>
class Base {
private:
    double toe;
    static int n;

public:
    explicit Base(double _toe);
    Base(Base &t);
    virtual double lower() = 0;
    void setToe(double _toe);
   double getToe();
    virtual ~Base() = default;
    static int amount();
    Base &operator=(Base &va);

};


#endif //MURAD_IBADOV_BASE_H
