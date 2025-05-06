#include <iostream>
#include <vector>
#include <random> //для рандома 
#include <ctime> //для инициализации srand 
using namespace std;

//Заполнение вектора влучайными числами [0, 99]
void FillRand(vector<int>& arr)
{
	static mt19937 gen(static_cast<unsigned int>(time(nullptr)));//генератор один раз
	uniform_int_distribution<int> dist(0, 99);

	for (auto& el : arr)
	{
		el = dist(gen);
	}
}

//Вывод содержимого вектора 
void Print(const vector<int>& arr)
{
	for (const auto& el : arr)
	{
		cout << el << "\t";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	vector<int> arr(n);
	FillRand(arr);
	cout << "Исходный массив:" << endl;
	Print(arr);

	//используем векторы для автоматического управления памятью и удобства 
	vector<int> even_arr, odd_arr;
	for (const auto& el : arr)
	{
		(el % 2 == 0 ? even_arr : odd_arr).push_back(el);
	}

	cout << "Чётные элементы:" << endl;
	Print(even_arr);
	cout << "Нечётные элементы:" << endl;
	Print(odd_arr);

	return 0;
}