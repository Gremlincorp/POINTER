#include <iostream>
using namespace std;

//���������� std::swap ��� ����������� � ��������������� 
void Exchange(int& a, int& b)
{
	swap(a, b);
}

int main()
{
	setlocale(LC_ALL, "");

	int a = 2;
	int b = 3;

	cout << "����� �������: a = " << a << "\t b = " << b << endl;
	Exchange(a, b);
	cout << "����� ������: a = " << a << "\t b = " << b << endl;

	return 0;
}
