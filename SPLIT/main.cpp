#include <iostream>
#include <vector>
#include <random> //��� ������� 
#include <ctime> //��� ������������� srand 
using namespace std;

//���������� ������� ���������� ������� [0, 99]
void FillRand(vector<int>& arr)
{
	static mt19937 gen(static_cast<unsigned int>(time(nullptr)));//��������� ���� ���
	uniform_int_distribution<int> dist(0, 99);

	for (auto& el : arr)
	{
		el = dist(gen);
	}
}

//����� ����������� ������� 
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
	cout << "�������� ������:" << endl;
	Print(arr);

	//���������� ������� ��� ��������������� ���������� ������� � �������� 
	vector<int> even_arr, odd_arr;
	for (const auto& el : arr)
	{
		(el % 2 == 0 ? even_arr : odd_arr).push_back(el);
	}

	cout << "׸���� ��������:" << endl;
	Print(even_arr);
	cout << "�������� ��������:" << endl;
	Print(odd_arr);

	return 0;
}