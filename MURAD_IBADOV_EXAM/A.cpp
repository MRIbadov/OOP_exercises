
#include "A.h"

A::A(double _toe, const std::string &_a): Base(_toe), a(_a) {};

double A::lower() {
    return getToe();
}

void A::setA(const std::string &_a) {
    this->a = _a;
}

const std::string A::getA() {
    return a;
}

