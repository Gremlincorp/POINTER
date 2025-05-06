#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int x = 10;
	int y = 5;
	int* px = nullptr; //�������������  ���������� ��������� nullptr
	int* py = nullptr;

	px = &x; //���������� ����� x � px 

	cout << "����� x ����� px: " << px << " ����� x ����� &x: " << &x << endl;
	cout << "�������� x ����� *px: " << *px << " �������� x ����� ����������: " << x << endl;

	*px = 99; //�������� �������� x ����� ��������� 

	cout << "����� �������� x ����� *px: " << *px << " ����� �������� x ����� ����������: " << x << endl;

	py = &y; // ���������� ����� y � py

	cout << "����� y ����� py: " << py << " ����� y ����� &y: " << &y << endl;
	cout << "�������� y ����� *py: " << *py << "�������� y ����� ����������: " << y << endl;

	py = px; //������ py ��������� �� x (����� �� px)

	cout << "�������� ����� py = px: *px = " << *px << ", *py = " << *py << ", x = " << x << endl;

	//����� ������ px � py 
	cout << "�����, �� ������� ��������� px: " << px << endl;
	cout << "�����, �� ������� ��������� py: " << py << endl;

	return 0;
}