#include <iostream>
#include <ctime>   // для srand
using namespace std;

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
int* Push_back(int arr[], int& n, const int value);

int main()
{
    setlocale(LC_ALL, "");
    srand(static_cast<unsigned int>(time(0))); // инициализация генератора случайных чисел

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* arr = new int[n];

    FillRand(arr, n);
    Print(arr, n);

    cout << "Адрес массива: " << arr << endl;
    cout << "Значение первого элемента: " << *arr << endl;

    cout << "Через указатель: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << "\t";
    }
    cout << endl;

    int value;
    cout << "Введите добавляемое значение: ";
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
        arr[i] = rand() % 100; // заполняем числами от 0 до 99
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
    // Создаём новый буфер размером n+1
    int* buffer = new int[n + 1];

    // Копируем старый массив в буфер
    for (int i = 0; i < n; i++)
    {
        buffer[i] = arr[i];
    }

    // Добавляем новый элемент в конец
    buffer[n] = value;

    // Удаляем старый массив
    delete[] arr;

    // Увеличиваем размер массива
    n++;

    // Возвращаем новый массив
    return buffer;
}

