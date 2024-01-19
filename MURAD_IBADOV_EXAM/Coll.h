//
// Created by hp on 1/17/2024.
//

#ifndef MURAD_IBADOV_COLL_H
#define MURAD_IBADOV_COLL_H
#include "Base.h"
class Coll{
private:
    std::vector<Base *> coll;
public:
    void add(Base *va);
    void removeAll();
    ~Coll();
    double allLower();
    void removeLastNegative();
    Base & operator[](int index);
};
#endif //MURAD_IBADOV_COLL_H
