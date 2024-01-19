#include "Coll.h"
#include "Silly.h"

void Coll::add(Base *va) {
    coll.push_back(va);
}

void Coll::removeAll() {
    for(Base *x : coll)
        delete x;

    coll.clear();
}

Coll::~Coll() {removeAll(); }

double Coll::allLower() {
    double sum = 0.0;
    for(Base *x : coll)
        sum+=x->lower();

    return sum;
}

void Coll::removeLastNegative() {
    if (coll.empty())
        throw Silly("there are no elements");

    int index = 0;
    for (int i = 0; i < coll.size(); i++) {
        if (coll[index]->lower() < 0) {
            index = i;
        }

    }

    if (index != 0) {
        delete coll[index];
        coll.erase(coll.begin() + index);
    }
}

Base &Coll::operator[](int index) {
    if(index >=0 && index < coll.size())
        return *coll[index];
    else if(index >= 0 && index >= coll.size())
        return *coll[index % coll.size()];
    else
        throw Silly("operator has problem []");


}