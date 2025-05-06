#include <iostream>
using namespace std;

//используем std::swap для оптимизации и универсальности 
void Exchange(int& a, int& b)
{
	swap(a, b);
}

int main()
{
	setlocale(LC_ALL, "");

	int a = 2;
	int b = 3;

	cout << "Перед обменом: a = " << a << "\t b = " << b << endl;
	Exchange(a, b);
	cout << "После обмена: a = " << a << "\t b = " << b << endl;

	return 0;
}
