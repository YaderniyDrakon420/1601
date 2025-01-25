#pragma once
#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Shape.h"

class Trapezoid : public Shape {
private:
    double base1, base2, height;

public:
    Trapezoid(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {}

    double area() const override {
        return 0.5 * (base1 + base2) * height;
    }
};

#endif
