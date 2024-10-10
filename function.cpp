#include "function.h"
#include <iostream>
using namespace std;

//стандартный конструктор (если вводится функция без параметров)
Function::Function() : name("Unnamed Function"), degree(0), data() {
    cout << "\"" << name << "\" - пустая функция (без параметров).\n";
}

//конструктор с использованием списка инициализаторов
Function::Function(const string& funcName, int funcDegree, const vector<pair<double, double>>& funcData)
    : name(funcName), degree(funcDegree), data(funcData) {
    cout << "Параметризованный конструктор вызван для \"" << name << "\".\n";
}

// копирование
Function::Function(const Function& other)
    : name(other.name + " (копия)"), degree(other.degree), data(other.data) {
    cout << "Копирование \"" << other.name << "\".\n";
}

//деструктор
Function::~Function() {
    cout << "\"" << name << "\" будет удалён.\n";
}

//вывод информации о функции
void Function::display() const {
    cout << "Функция: " << name << "\n";
    cout << "Степень: " << degree << "\n";
    cout << "Табличные данные:\n";
    for (const auto& point : data) {
        cout << " (" << point.first << ", " << point.second << ")\n";
    }
    cout << "-----------------------------\n";
}
