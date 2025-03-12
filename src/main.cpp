#include <iostream>
#include "CPolynom2.h"

using namespace std;

int main() {
    CPolynom2 p1(3, 5);
    CPolynom2 p2(2, -1);

    cout << "p1: ";
    p1.print();
    cout << "p2: ";
    p2.print();
    CPolynom2 sum = p1 + p2;
    cout << "Сума: ";
    sum.print();

    CPolynom2 diff = p1 - p2;
    cout << "Різниця: ";
    diff.print();

    CPolynom2 scaled = p1 * 2;
    cout << "Множення p1 на 2: ";
    scaled.print();

    double value = p1.evaluate(2);
    cout << "Значення p1(2): " << value << endl;

    cout << "Похідна p1: " << p1.derivative() << endl;

    try {
        double root = p1.findRoot();
        cout << "Корінь p1: " << root << endl;
    } catch (const runtime_error& e) {
        cout << "Помилка: " << e.what() << endl;
    }

    p1.negate();
    cout << "Змінений знак p1: ";
    p1.print();

    return 0;
}