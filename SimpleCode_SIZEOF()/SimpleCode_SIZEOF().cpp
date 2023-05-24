#include <iostream>

int main()
{
    int arr[]{ 5,6,8,8,4,5,9,6,8 };

    int a = sizeof(arr); // найдет сколько байт хранинтся в массиве
    int b = sizeof(arr[0]); // покажет сколько хранится в ожном индексе памяти в байтах

    std::cout << "Всего элементов в массиве " << a / b << '\n';

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        std::cout << "Индекс " << i << " содержит " << arr[i]<< '\n';
        std::cout << "Всего элементов в массиве " << sizeof(arr) / sizeof(arr[0]);
    }
}
