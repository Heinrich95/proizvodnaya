#include <iostream>
#include "Function.h"
using namespace std;

int main() {
    // Создание объекта с помощью конструктора по умолчанию
    cout << "Создание объекта f1 с помощью конструктора по умолчанию.\n";
    Function f1;
    f1.display();

    // Создание объекта с помощью параметризованного конструктора
    cout << "\nКвадратная функция\n";
    vector<pair<double, double>> data = { {0.0, 0.0}, {1.0, 1.0}, {2.0, 4.0}, {3.0, 9.0} };
    Function f2("Quadratic Function", 2, data);
    f2.display();

    // Создание объекта с помощью копирующего конструктора
    cout << "\nСоздание объекта f3 как копии f2.\n";
    Function f3 = f2;
    f3.display();

    cout << "\nКубическая функция\n";
    Function f4("Cubic Function", 3, { {0.0, 0.0}, {1.0, 1.0}, {2.0, 8.0}, {3.0, 27.0} });
    f4.display();

    // Проверка перегрузки оператора +
    cout << "\nСложение f2 и f4\n";
    Function f5 = f2 + f4;
    f5.display();


    cout << "\nЗавершение программы.\n";
    return 0;
}

