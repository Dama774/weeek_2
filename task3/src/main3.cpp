#include <iostream>
#include <algorithm> // Для std::sort

double findMedian(double* arr, int size) {
    std::sort(arr, arr + size); // Сортируем массив

    if (size % 2 == 0) {
        // Если количество элементов четное, медиана - среднее двух центральных элементов
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        // Если количество элементов нечетное, медиана - центральный элемент
        return arr[size / 2];
    }
}

int main() {
    int n;

    std::cout << "Введите количество элементов: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Количество элементов должно быть положительным!" << std::endl;
        return 1;
    }

    double* data_array = new double[n]; // Создаем массив

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        std::cin >> data_array[i];
    }

    double median = findMedian(data_array, n); // Находим медиану

    std::cout << "Медиана: " << median << std::endl;

    // Освобождаем память
    delete[] data_array;

    return 0;
}

