#include <iostream>
#include "CPolynom2.h"

using namespace std;

int main() {
    // Створення об'єктів
    CPolynom2 p1(3, 5);
    CPolynom2 p2(2, -1);

    // Вивід поліномів
    cout << "p1: ";
    p1.print();
    
    cout << "p2: ";
    p2.print();

    // Додавання поліномів
    CPolynom2 sum = p1 + p2;
    cout << "Сума: ";
    sum.print();

    // Віднімання поліномів
    CPolynom2 diff = p1 - p2;
    cout << "Різниця: ";
    diff.print();

    // Множення на скаляр
    CPolynom2 scaled = p1 * 2;
    cout << "Множення p1 на 2: ";
    scaled.print();

    // Обчислення значення полінома при x = 2
    double value = p1.evaluate(2);
    cout << "Значення p1(2): " << value << endl;

    // Знаходження похідної
    cout << "Похідна p1: " << p1.derivative() << endl;

    // Знаходження кореня рівняння
    try {
        double root = p1.findRoot();
        cout << "Корінь p1: " << root << endl;
    } catch (const runtime_error& e) {
        cout << "Помилка: " << e.what() << endl;
    }

    // Зміна знаку коефіцієнтів p1
    p1.negate();
    cout << "Змінений знак p1: ";
    p1.print();

    return 0;
}