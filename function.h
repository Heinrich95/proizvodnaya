#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <string>
#include <vector>
#include <utility> // ��� pair
using namespace std;

class Function {
private:
    string name; // �������� �������
    int degree; // ������� ������� (��������, ������� ����������)
    vector<pair<double, double>> data; // ��������� ������ ������� (x, y)

public:
    // ����������� �� ���������
    Function();
    // ����������� � ����������� (������ ���������������)
    Function(const string& funcName, int funcDegree, const vector<pair<double, double>>& funcData);
    // ����������� �����
    Function(const Function& other);
    // ����������
    ~Function();
    // ����������� �������
    void display() const;
};

#endif // FUNCTION_H_INCLUDED
