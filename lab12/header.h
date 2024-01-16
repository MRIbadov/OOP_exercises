#ifndef DENEME_HEADER_H
#define DENEME_HEADER_H

#include <iostream>
#include <vector>

class Point{
protected:
    double longitude;
    double latitude;
public:
    Point(double _long, double _lat);
    void setLong(double _long);
    void setLat(double _lat);
    double getLong()const;
    double getLat()const;


};

class GeoObject {
protected:
    Point point;
    std::string label;


public:

    GeoObject(const Point &point1, const std::string & lab);
    virtual ~GeoObject(){ std::cout<<"virtual destructor has worked"<<std::endl;};
    void setLabel(std::string &_label);
    void setPoint(Point &point1);
    const std::string getLabel();
    const Point & getPoint();
    virtual void printInfo() = 0;

};

class Marker: public GeoObject {
protected:
    double size;
    std::string color;
public:
    Marker(const Point &mainPoint, const std::string &_label, const std::string &color, double _size);
    void setSize(double va){this->size = va; }
    void setColor(std::string _color){this->color = _color; }
    double getSize()const{return size; }
    std::string getColor()const{return color; }
    void printInfo()override;


};

class Polygon: public GeoObject {
protected:
    std::string fill_color;
    std::string border_color;
    std::vector<Point> coordinates;
public:
    Polygon(const Point & point, const std::string
    &_label, const std::string & _fill_color, const std::string & border_color, std::vector<Point> &_coor);
    const std::string& getFillColor() const { return fill_color; }
    const std::string& getBorderColor() const { return border_color; }
    const std::vector<Point>& getCoordinates() const { return coordinates; }
    void setFillColor(const std::string& fillColor) { this->fill_color = fillColor; }
    void setBorderColor(const std::string& borderColor) { this->border_color = borderColor; }
    void setCoordinates(const std::vector<Point>& _coordinates) { this->coordinates = _coordinates; }

    void printInfo()override{
        std::cout<<"polygon info Label: "<<getLabel() << " Fill Color: "<<getFillColor() << " Border Color: "
        << getBorderColor() <<  std::endl;
        for(const Point & x : coordinates)
            std::cout<<" coordinates: Longitude  "<< x.getLong()<<"\t"<<
            "Latitude is "<<x.getLat()<<std::endl;
    }


};

class Layer{
    std::vector<GeoObject *>objects;

public:
    void addNew(GeoObject * obh){
        objects.push_back(obh);
    }

    void removeObj() {
        for(auto obj : objects)
            delete obj;
        objects.clear();
    }

    GeoObject * operator[](size_t index){
        if(objects.size() > index )
            throw std::logic_error("Limit excedede!!  ");

        return objects[index];
    }
};






#endif