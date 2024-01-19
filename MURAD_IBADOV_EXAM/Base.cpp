#include "Base.h"

int Base::n = 0;
Base::Base(double _toe): toe(_toe) {n++;};

int Base::amount() {
    return n;
}

Base::Base(Base &t): toe(t.toe) {n++;}

void Base::setToe(double _toe) {
    this->toe = _toe;
}

double Base::getToe() { return toe; }

Base &Base::operator=(Base &va) {
    toe = va.toe;
    return *this;
}
