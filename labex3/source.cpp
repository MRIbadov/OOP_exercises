#include "header.h"

int Figure::count_Figures() {
    return count;
}

Rectangle::Rectangle(double _len, double _wid): len(_len), width(_wid) {count++;};

void Rectangle::set_len(double _len) {
    if(_len > 0)
      this->len = _len;
    else
        Eror_Perimeter();

}
void Rectangle::set_wid(double _wid) {
    if(_wid > 0)
       this->width = _wid;
    else
        Eror_Perimeter();
}

double Rectangle::get_len() {
    return len;
}
double Rectangle::get_widt() {
    return width;
}
double Rectangle::getArea() const {
    return width * len;
}
double Rectangle::getPerimeter() const {
    return 2 * (width + len);
}
Rectangle::~Rectangle()  {
    count--;
}
Triangle::Triangle(double a, double b, double c): side_a(a), side_b(b), side_c(c) {count ++;};

void Triangle::set_side_a(double _a) {
    if(_a >0)
       this->side_a = _a;
    else
        Eror_Perimeter();
}
void Triangle::set_b(double _b) {
    if(_b > 0)
       this->side_b =  _b;
    else
        Eror_Perimeter();
}
void Triangle::set_c(double _c) {
    if(_c > 0)
      this->side_c = _c;
    else
        Eror_Perimeter();
}

double Triangle::get_a() {

    return side_a;
}
double Triangle::get_b() {
    return side_b;
}
double Triangle::get_c() {
    return side_c;
}
double Triangle::getPerimeter() const {
    return side_a + side_b + side_c;
}
double Triangle::getArea() const {
    double hp = getPerimeter() / 2;
    return sqrt(hp * (hp - side_a) + hp * (hp - side_b) + hp * (hp - side_c));
}
Triangle::~Triangle(){
    count--;
}

void FigureSet::AddFigure(Figure &fig) {
    arr.push_back(&fig);
}

double FigureSet::getSummaryArea() {
    double sum =0.0;
    for(Figure *x : arr)
        sum+= x->getArea();

    return sum;
}

double FigureSet::getSummaryPer() {
    double sum =0.0;
    for(Figure *x : arr)
        sum+=x->getPerimeter();

    return sum;
}

Figure * FigureSet::operator[](const size_t index) {
    if(index > arr.size())
        throw std::logic_error("Limit exceeed");

    return arr[index];

}

