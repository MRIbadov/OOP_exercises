#include <iostream>
#include <cassert>
#include "A.h"
#include "Base.h"
#include "B.h"
#include "Coll.h"
#include "Silly.h"

int main() {

    A a(-2.5, "rho");
    assert(a.getToe() == -2.5);
    assert(a.getA() == "rho");
    a.setToe(-1.0);
    assert(a.getToe() == -1.0);
    a.setA("omega");
    assert(a.getA() == "omega");
    assert(a.lower() == -1.0);

    B b(1.5, -1.0);
    assert(b.getToe() == 1.5);
    assert(b.getB() == -1.0);
    b.setToe(0.0);
    assert(b.getToe() == 0.0);
    b.setB(0.0);
    assert(b.getB() == 0.0);
    assert(b.lower() == 0.0);

    Base *a_ptr = new A(1.5, "gamma");;
    assert(a_ptr->getToe() == 1.5);
    a_ptr->setToe(8.25);
    assert(a_ptr->getToe() == 8.25);
    assert(a_ptr->lower() == 8.25);
    delete a_ptr;

    Base *b_ptr = new B(-2.5, 8.25);;
    assert(b_ptr->getToe() == -2.5);
    b_ptr->setToe(12.5);
    assert(b_ptr->getToe() == 12.5);
    assert(b_ptr->lower() == 8.25);
    delete b_ptr;


    Coll c;
    c.add(new A(8.25, "dzeta"));
    c.add(new B(2.0, 12.5));
    c.add(new A(1.5, "rho"));
    assert(c.allLower() == 11.75);  // 8.25 + 2.0 + 1.5 = 11.75

    // Coll has a destructor and a removeAll method
    // Base has a virtual destructor
    assert(c[0].getToe() == 8.25);
    assert(c[1].getToe() == 2.0);
    assert(c[2].getToe() == 1.5);


    assert(c[3].getToe() == 8.25);
    assert(c[4].getToe() == 2.0);
    assert(c[5].getToe() == 1.5);
    assert(c[6].getToe() == 8.25);
    assert(c[10].getToe() == 2.0);


    c.removeLastNegative();
    //std::cout<<c.allLower()<<std::endl;
    assert(c.allLower() == 11.75);// nothing was removed

    c.removeAll();




    assert(Base::amount() == 7); // this can be a different value if You are using copy-assignment
    A x(a);
    assert(Base::amount() == 8); // this can be a different value if You are using copy-assignment
    B y(b);

    assert(Base::amount() == 9); // this can be a different value if You are using copy-assignment
    x = a;
    a = x;
    x = x;
    y = b;
    assert(Base::amount() == 9); // no changes here

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
