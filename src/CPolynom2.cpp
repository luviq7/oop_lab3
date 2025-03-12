#include "CPolynom2.h"

using namespace std;

CPolynom2::CPolynom2() {
    a = 0;
    c = 0;
}

CPolynom2::CPolynom2(double coefA, double coefC) {
    a = coefA;
    c = coefC;
}

CPolynom2::CPolynom2(const CPolynom2& other) {
    a = other.a;
    c = other.c;
}

double CPolynom2::getA() const {
    return a;
}

double CPolynom2::getC() const {
    return c;
}

void CPolynom2::setA(double coefA) {
    a = coefA;
}

void CPolynom2::setC(double coefC) {
    c = coefC;
}

double CPolynom2::evaluate(double x) const {
    return a * x + c;
}

double CPolynom2::derivative() const {
    return a;
}

double CPolynom2::findRoot() const {
    if (a == 0) {
        if (c == 0) {
            throw runtime_error("Рівняння має безліч коренів.");
        }
        throw runtime_error("Рівняння не має коренів.");
    }
    return -c / a;
}

CPolynom2 CPolynom2::operator+(const CPolynom2& other) const {
    return CPolynom2(a + other.a, c + other.c);
}

CPolynom2 CPolynom2::operator-(const CPolynom2& other) const {
    return CPolynom2(a - other.a, c - other.c);
}

CPolynom2 CPolynom2::operator*(double scalar) const {
    return CPolynom2(a * scalar, c * scalar);
}

void CPolynom2::negate() {
    a = -a;
    c = -c;
}

void CPolynom2::print() const {
    cout << a << "x ";
    if (c >= 0) {
        cout << "+ " << c;
    } else {
        cout << "- " << -c;
    }
    cout << endl;
}