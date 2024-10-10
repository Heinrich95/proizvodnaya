#include "function.h"
#include <iostream>
using namespace std;

//����������� ����������� (���� �������� ������� ��� ����������)
Function::Function() : name("Unnamed Function"), degree(0), data() {
    cout << "\"" << name << "\" - ������ ������� (��� ����������).\n";
}

//����������� � �������������� ������ ���������������
Function::Function(const string& funcName, int funcDegree, const vector<pair<double, double>>& funcData)
    : name(funcName), degree(funcDegree), data(funcData) {
    cout << "����������������� ����������� ������ ��� \"" << name << "\".\n";
}

// �����������
Function::Function(const Function& other)
    : name(other.name + " (�����)"), degree(other.degree), data(other.data) {
    cout << "����������� \"" << other.name << "\".\n";
}

//����������
Function::~Function() {
    cout << "\"" << name << "\" ����� �����.\n";
}

//����� ���������� � �������
void Function::display() const {
    cout << "�������: " << name << "\n";
    cout << "�������: " << degree << "\n";
    cout << "��������� ������:\n";
    for (const auto& point : data) {
        cout << " (" << point.first << ", " << point.second << ")\n";
    }
    cout << "-----------------------------\n";
}
