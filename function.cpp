#include "function.h"
#include <iostream>
using namespace std;

//стандартный конструктор (если вводится функция без параметров)
Function::Function() : name("Unnamed Function"), degree(0), data() {
}
//конструктор с использованием списка инициализаторов
Function::Function(const string& funcName, int funcDegree, const vector<pair<double, double>>& funcData)
    : name(funcName), degree(funcDegree), data(funcData) {
}
// копирование
Function::Function(const Function& other)
    : name(other.name), degree(other.degree), data(other.data) {
}
//деструктор
Function::~Function() {
    cout << "\"" << name << "\" будет удалён.\n";
}

Function Function::operator+(const Function& other) const {
    // Объединяем данные из обеих функций
    vector<pair<double, double>> combinedData = data;
    combinedData.insert(combinedData.end(), other.data.begin(), other.data.end());

    // Создаем новую функцию с объединенным именем и наибольшей степенью
    string combinedName = name + " + " + other.name;
    int combinedDegree = max(degree, other.degree);

    return Function(combinedName, combinedDegree, combinedData);
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
