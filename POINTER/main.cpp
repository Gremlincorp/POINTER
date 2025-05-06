#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "Hello Pointers" << endl;

    int a = 2;
    int* pa = &a; // указатель на переменную a

    cout << "Значение переменной a: " << a << endl;
    cout << "Адрес переменной a (с помощью &a): " << &a << endl;
    cout << "Значение указателя pa (адрес переменной a): " << pa << endl;
    cout << "Значение, на которое указывает pa (*pa): " << *pa << endl;

    return 0;
}