#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int x = 10;
	int y = 5;
	int* px = nullptr; //инициализация  указателей значением nullptr
	int* py = nullptr;

	px = &x; //записываем адрес x в px 

	cout << "Адрес x через px: " << px << " Адрес x через &x: " << &x << endl;
	cout << "Значение x через *px: " << *px << " Значение x через переменную: " << x << endl;

	*px = 99; //изменяем значение x через указатель 

	cout << "Новое значение x через *px: " << *px << " Новое значение x через переменную: " << x << endl;

	py = &y; // записываем адрес y в py

	cout << "Адрес y через py: " << py << " Адрес y через &y: " << &y << endl;
	cout << "Значение y через *py: " << *py << "Значение y через переменную: " << y << endl;

	py = px; //теперь py указывает на x (адрес из px)

	cout << "Значения после py = px: *px = " << *px << ", *py = " << *py << ", x = " << x << endl;

	//вывод адреса px и py 
	cout << "Адрес, на который указывает px: " << px << endl;
	cout << "Адрес, на который указывает py: " << py << endl;

	return 0;
}