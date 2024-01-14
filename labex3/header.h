#ifndef DENEME_HEADER_H
#define DENEME_HEADER_H

#include <iostream>
#include <stdexcept>
#include <cmath>
#include <vector>
static int count = 0;

class Figure{
  
public:
     virtual ~Figure() = default;
    virtual double getArea() const = 0;
    virtual double getPerimeter() const  = 0;

    static int count_Figures() ;

};

class Eror_Perimeter: public std::logic_error{
public:
    Eror_Perimeter(): std::logic_error("Sides can not be negative and zero"){};
};

class Rectangle : public Figure{
private:
    double len;
    double width;
public:

    Rectangle(double _len, double _wid);
    void set_len(double _len);
    void set_wid(double _wid);
    double get_len();
    double get_widt();
    double getArea() const override;
    double getPerimeter() const override;
    ~Rectangle();
};

class Triangle : public Figure {
private:
    double side_a;
    double side_b;
    double side_c;
public:
    Triangle(double a, double b, double c);
    void set_side_a(double _a);
    void set_b(double _b);
    void set_c (double _c);
    double get_a();
    double get_b();
    double get_c();
    double getArea()const override;
    double getPerimeter() const override;
    ~Triangle();
};
class FigureSet {
private:
    std::vector<Figure *> arr;
public:
    void AddFigure(Figure &fig);
    double getSummaryArea();
    double getSummaryPer();
    Figure * operator[](const size_t);


    };
#endif //DENEME_HEADER_H
