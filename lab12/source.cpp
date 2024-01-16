

#include "header.h"

Point::Point(double _long, double _lat): latitude(_lat), longitude(_lat)  {};

void Point::setLong(double _long) {
    this->longitude = _long;
}

void Point::setLat(double _lat) {
    this->latitude = _lat;
}

double Point::getLat() const{
    return latitude;
}
double Point::getLong() const{
    return longitude;
}

GeoObject::GeoObject(const Point &point_1, const std::string &lab):point(point_1), label(lab) {};


void GeoObject::setLabel(std::string &_label) {
    this->label = _label;
}
void GeoObject::setPoint(Point &point1) { this->point = point1; }

const std::string GeoObject::getLabel() {
    return label;
}
const Point & GeoObject::getPoint() {
    return point;
}

Marker::Marker(const Point &point, const std::string &_label, const std::string &_color, double _size):
        GeoObject(point, _label), color(_color), size(_size)
{}

void Marker::printInfo() {
    std::cout<<"Color is this " << color << " size is  "<< size <<std::endl;
}

Polygon::Polygon(const Point &point, const std::string &_label, const std::string &_fill_color,
                 const std::string &border_color, std::vector<Point> &_coor): GeoObject(point, _label),
                 fill_color(_fill_color), border_color(border_color), coordinates(_coor){};

;


