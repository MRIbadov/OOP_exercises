#include "B.h"



B::B(double _toe, double _b): Base(_toe), b(_b) {};


void B::setB(double _b) { this->b = _b; }

double B::getB() {return b; }

double B::lower() {return std::min(getToe(), getB()); }

