#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "Hello Pointers" << endl;

    int a = 2;
    int* pa = &a; // ��������� �� ���������� a

    cout << "�������� ���������� a: " << a << endl;
    cout << "����� ���������� a (� ������� &a): " << &a << endl;
    cout << "�������� ��������� pa (����� ���������� a): " << pa << endl;
    cout << "��������, �� ������� ��������� pa (*pa): " << *pa << endl;

    return 0;
}