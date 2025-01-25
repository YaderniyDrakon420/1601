#include "President.h"
#include "Manager.h"
#include "Worker.h"
#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapezoid.h"

//#1
//int main() {
//    President president;
//    Manager manager;
//    Worker worker;
//
//    president.Print();
//    manager.Print();
//    worker.Print();
//
//    return 0;
//}

//#2
int main() {
    Rectangle rect(4, 5);
    Circle circle(3);
    RightTriangle triangle(4, 3);
    Trapezoid trapezoid(4, 6, 3);

    Shape* shapes[] = { &rect, &circle, &triangle, &trapezoid };

    for (Shape* shape : shapes) {
        std::cout << "Area: " << shape->area() << std::endl;
    }

    return 0;
}
