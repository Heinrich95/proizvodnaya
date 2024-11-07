#include <iostream>
#include "Function.h"
using namespace std;

int main() {
    // �������� ������� � ������� ������������ �� ���������
    cout << "�������� ������� f1 � ������� ������������ �� ���������.\n";
    Function f1;
    f1.display();

    // �������� ������� � ������� ������������������ ������������
    cout << "\n���������� �������\n";
    vector<pair<double, double>> data = { {0.0, 0.0}, {1.0, 1.0}, {2.0, 4.0}, {3.0, 9.0} };
    Function f2("Quadratic Function", 2, data);
    f2.display();

    // �������� ������� � ������� ����������� ������������
    cout << "\n�������� ������� f3 ��� ����� f2.\n";
    Function f3 = f2;
    f3.display();

    cout << "\n���������� �������\n";
    Function f4("Cubic Function", 3, { {0.0, 0.0}, {1.0, 1.0}, {2.0, 8.0}, {3.0, 27.0} });
    f4.display();

    // �������� ���������� ��������� +
    cout << "\n�������� f2 � f4\n";
    Function f5 = f2 + f4;
    f5.display();


    cout << "\n���������� ���������.\n";
    return 0;
}

