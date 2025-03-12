#pragma once

#include <iostream>

class CPolynom2 {
private:
    double a;
    double c;

public:
    CPolynom2();
    CPolynom2(double coefA, double coefC);
    CPolynom2(const CPolynom2& other);

    double getA() const;
    double getC() const;

    void setA(double coefA);
    void setC(double coefC);

    double evaluate(double x) const;
    double derivative() const;
    double findRoot() const;

    CPolynom2 operator+(const CPolynom2& other) const;
    CPolynom2 operator-(const CPolynom2& other) const;
    CPolynom2 operator*(double scalar) const;

    void negate();
    void print() const;
};
