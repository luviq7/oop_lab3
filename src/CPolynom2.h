#pragma once

#include <iostream>

class CPolynom2 {
private:
    double a;
    double c;

public:
    // Конструктори
    CPolynom2();
    CPolynom2(double coefA, double coefC);
    CPolynom2(const CPolynom2& other);

    // Гетери
    double getA() const;
    double getC() const;

    // Сетери
    void setA(double coefA);
    void setC(double coefC);

    // Функції-члени
    double evaluate(double x) const;
    double derivative() const;
    double findRoot() const;

    // Оператори
    CPolynom2 operator+(const CPolynom2& other) const;
    CPolynom2 operator-(const CPolynom2& other) const;
    CPolynom2 operator*(double scalar) const;

    // Додаткові методи
    void negate();
    void print() const;
};
