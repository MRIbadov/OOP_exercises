//
// Created by hp on 1/17/2024.
//

#ifndef MURAD_IBADOV_A_H
#define MURAD_IBADOV_A_H
#include "Base.h"
class A: public Base{
private:
    std::string a;
public:
    A(double _toe, const std::string & _a);
    double lower()override;
    void setA(const std::string &_a);
    const std::string getA();

};
#endif //MURAD_IBADOV_A_H
