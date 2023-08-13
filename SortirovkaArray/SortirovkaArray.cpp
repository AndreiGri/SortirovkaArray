﻿#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251 > nul");
    // Размер массива:
    const int n = 10;
    // Инициализация генератора случайных чисел:
    srand(2);
    // Создание массива:
    int nums[n];
    // Целочисленные переменные:
    int i, j, k, s;
    cout << "Массив до сортировки:\n| ";
    // Заполнение массива случайными числами:
    for (k = 0;k < n;k++) {
        nums[k] = rand() % 10;
        cout << nums[k] << " | ";
    }
    cout << "\nМассив после сортировки:\n| ";
    // Сортировка массива:
    for (i = 1;i <= n - 1;i++) {
        // Перебор элементов массива:
        for (j = 0;j < n - i;j++) {
            // "Обмен" значениями:
            if (nums[j] > nums[j + 1]) {
                s = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = s;
            }
        }
    }
    // Отображение отсортированного массива:
    for (k = 0;k < n;k++) {
        cout << nums[k] << " | ";
    }
    cout << endl;
    // Задержка консольного окна:
    system("pause > nul");
    return 0;
}
