#include <iostream>
#include <ctime>   // ��� srand
using namespace std;

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
int* Push_back(int arr[], int& n, const int value);

int main()
{
    setlocale(LC_ALL, "");
    srand(static_cast<unsigned int>(time(0))); // ������������� ���������� ��������� �����

    int n;
    cout << "������� ������ �������: ";
    cin >> n;

    int* arr = new int[n];

    FillRand(arr, n);
    Print(arr, n);

    cout << "����� �������: " << arr << endl;
    cout << "�������� ������� ��������: " << *arr << endl;

    cout << "����� ���������: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << "\t";
    }
    cout << endl;

    int value;
    cout << "������� ����������� ��������: ";
    cin >> value;

    arr = Push_back(arr, n, value);

    Print(arr, n);

    delete[] arr;
    return 0;
}

void FillRand(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100; // ��������� ������� �� 0 �� 99
    }
}

void Print(const int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int* Push_back(int arr[], int& n, const int value)
{
    // ������ ����� ����� �������� n+1
    int* buffer = new int[n + 1];

    // �������� ������ ������ � �����
    for (int i = 0; i < n; i++)
    {
        buffer[i] = arr[i];
    }

    // ��������� ����� ������� � �����
    buffer[n] = value;

    // ������� ������ ������
    delete[] arr;

    // ����������� ������ �������
    n++;

    // ���������� ����� ������
    return buffer;
}