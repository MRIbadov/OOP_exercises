

#ifndef MURAD_IBADOV_B_H
#define MURAD_IBADOV_B_H

#include "Base.h"

class B : public Base{
private:
    double b;
public:
    B(double _toe, double _b);
    void setB(double _b);
    double getB();
    double lower()override;

};
#endif //MURAD_IBADOV_B_H
