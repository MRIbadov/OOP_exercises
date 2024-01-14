#include <iostream>
#include "header.h"



int main() {
    Rectangle rectangle(5, 10);
    Triangle triangle(3, 4, 5);
   // Circle circle(2.5);

    FigureSet figureSet;
    figureSet.AddFigure(rectangle);
    figureSet.AddFigure(triangle);
   // figureSet.AddFigure(&circle);

    std::cout << "Summary Area: " << figureSet.getSummaryArea() << std::endl;
    std::cout << "Summary Perimeter: " << figureSet.getSummaryPer() << std::endl;

    std::cout << "Number of Figures: " << Figure::count_Figures() << std::endl;

    try {
        Figure* selectedFigure = figureSet[1];
        std::cout << "Selected Figure Area: " << selectedFigure->getArea() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }


    return 0;

}
