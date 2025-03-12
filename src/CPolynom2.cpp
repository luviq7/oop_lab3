#include "CPolynom2.h"

using namespace std;

// Конструктор за замовчуванням
CPolynom2::CPolynom2() {
    a = 0;
    c = 0;
}

// Конструктор з параметрами
CPolynom2::CPolynom2(double coefA, double coefC) {
    a = coefA;
    c = coefC;
}

// Конструктор копіювання
CPolynom2::CPolynom2(const CPolynom2& other) {
    a = other.a;
    c = other.c;
}

// Гетери
double CPolynom2::getA() const {
    return a;
}

double CPolynom2::getC() const {
    return c;
}

// Сетери
void CPolynom2::setA(double coefA) {
    a = coefA;
}

void CPolynom2::setC(double coefC) {
    c = coefC;
}

// Функція для обчислення значення виразу при заданому x
double CPolynom2::evaluate(double x) const {
    return a * x + c;
}

// Функція для обчислення похідної
double CPolynom2::derivative() const {
    return a;
}

// Функція для знаходження кореня рівняння ax + c = 0
double CPolynom2::findRoot() const {
    if (a == 0) {
        if (c == 0) {
            throw runtime_error("Рівняння має безліч коренів.");
        }
        throw runtime_error("Рівняння не має коренів.");
    }
    return -c / a;
}

// Операція додавання двох поліномів
CPolynom2 CPolynom2::operator+(const CPolynom2& other) const {
    return CPolynom2(a + other.a, c + other.c);
}

// Операція віднімання двох поліномів
CPolynom2 CPolynom2::operator-(const CPolynom2& other) const {
    return CPolynom2(a - other.a, c - other.c);
}

// Операція множення полінома на скаляр
CPolynom2 CPolynom2::operator*(double scalar) const {
    return CPolynom2(a * scalar, c * scalar);
}

// Зміна знаку всіх коефіцієнтів на протилежний
void CPolynom2::negate() {
    a = -a;
    c = -c;
}

// Вивід полінома у консоль
void CPolynom2::print() const {
    cout << a << "x ";
    if (c >= 0) {
        cout << "+ " << c;
    } else {
        cout << "- " << -c;
    }
    cout << endl;
}