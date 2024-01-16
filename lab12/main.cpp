#include <iostream>
#include "header.h"



int main() {

    Point markerPoint(10.0, 20.0);
    Marker marker(markerPoint, "Marker1", "Red", 5.0);
    marker.printInfo();

    std::vector<Point> polygonCoords = {Point(30.0, 40.0), Point(35.0, 45.0), Point(40.0, 50.0)};
    Polygon polygon(markerPoint, "Polygon1", "Green", "Blue", polygonCoords);
    polygon.printInfo();

    Layer layer;
    layer.addNew(new Marker(Point(15.0, 25.0), "Marker2", "Blue", 3.0));
    layer.addNew(new Polygon(Point(25.0, 35.0), "Polygon2", "Yellow", "Black", polygonCoords));

    // Accessing objects in the layer using indexing operator
    try {
        layer[0]->printInfo();
        layer[1]->printInfo();
        // Accessing an out-of-range index to test exception handling
        // Uncommenting the line below will throw an out_of_range exception
        // layer[2]->printInfo();
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;

}
