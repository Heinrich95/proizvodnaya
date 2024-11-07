#include "function.h"
#include <iostream>
using namespace std;

//����������� ����������� (���� �������� ������� ��� ����������)
Function::Function() : name("Unnamed Function"), degree(0), data() {
}
//����������� � �������������� ������ ���������������
Function::Function(const string& funcName, int funcDegree, const vector<pair<double, double>>& funcData)
    : name(funcName), degree(funcDegree), data(funcData) {
}
// �����������
Function::Function(const Function& other)
    : name(other.name), degree(other.degree), data(other.data) {
}
//����������
Function::~Function() {
    cout << "\"" << name << "\" ����� �����.\n";
}

Function Function::operator+(const Function& other) const {
    // ���������� ������ �� ����� �������
    vector<pair<double, double>> combinedData = data;
    combinedData.insert(combinedData.end(), other.data.begin(), other.data.end());

    // ������� ����� ������� � ������������ ������ � ���������� ��������
    string combinedName = name + " + " + other.name;
    int combinedDegree = max(degree, other.degree);

    return Function(combinedName, combinedDegree, combinedData);
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
