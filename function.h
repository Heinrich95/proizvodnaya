#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <string>
#include <vector>
#include <utility> // Для pair
using namespace std;

class Function {
private:
    string name; // Название функции
    int degree; // Степень функции (например, степень многочлена)
    vector<pair<double, double>> data; // Табличные данные функции (x, y)

public:
    // Конструктор по умолчанию
    Function();
    // конструктор с параметрами (список инициализаторов)
    Function(const string& funcName, int funcDegree, const vector<pair<double, double>>& funcData);
    // конструктор копий
    Function(const Function& other);
    // Деструктор
    ~Function();
    // отображение функции
    void display() const;
};

#endif // FUNCTION_H_INCLUDED
