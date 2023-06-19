#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
    system("chcp 1251>nul");
    int n, m;

    //Задача 1. Элементы и ср.арифм.
    std::cout << "Задача 1.\n";
    const int size = 10;
    int arr[size];
    int sum = 0;
    int count = 0;
    srand(time(NULL));
    for (int i = 0; i < size; i++)

        arr[i] = rand() % (35 - 10) + 10;
    std::cout << "{ ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << ", ";
    std::cout << "\b\b}" << std::endl;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    std::cout << "Среднее арифметическое - " << sum / (double)size << std::endl;
    for (int i = 0; i < size; i++)
        if (arr[i] < sum / (double)size)
            count++;
    std::cout << "Кол-во элементов -> " << count << std::endl;

    //Задача 2. Сложение двух массивов.
    std::cout << "Задача 2.\nСложение двух двумерных массивов.\n";
    int arr1[5][5];
    int arr2[5][5];
    int arr3[5][5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr1[i][j] = rand() % 4 + 1;
            arr2[i][j] = rand() % 4 + 1;
            arr3[i][j] = rand() % 4 + 1;
        }
    }

    std::cout << "Первый массив:      Второй массив:" << std::endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 5; k++) {
                if (j == 0)
                    std::cout << arr1[i][k] << " ";
                if (j == 1)
                    std::cout << arr2[i][k] << " ";
            }
            std::cout << "         ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;


    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            arr3[i][j] = arr1[i][j] + arr2[i][j];
    std::cout << "Итог: " << std::endl;
    std::cout << "Первый массив:     Второй массив:     Результат сложения:" << std::endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 5; k++) {
                if (j == 0)
                    std::cout << arr1[i][k] << " ";
                if (j == 1)
                    std::cout << arr2[i][k] << " ";
                if (j == 2)
                    std::cout << arr3[i][k] << " ";
            }
            std::cout << "         ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //Задача 3. Шестизначное число.

    std::cout << "Задача 3.\nШестизначное число.\n";
    std::cin >> n;
    int array[6];
    if (n <= 99999 && n <= 999999)
        std::cout << "Число введено не верно! Введите шестизначное число ->\n";
    else
        std::cout << "Итоговый массив:\n{";
    for (int i = 0; i < 6; i++) {
        array[i] = n % 10;
        n /= 10;


        std::cout << array[i]<<", ";
    }
    std::cout <<"\b\b}.";










    return 0;
}