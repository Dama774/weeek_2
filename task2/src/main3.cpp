#include <iostream>
#include <vector>

void sieveOfEratosthenes(int n) {
    // Создаем вектор для хранения информации о простых числах
    std::vector<bool> isPrime(n + 1, true); // Изначально считаем все числа простыми
    isPrime[0] = isPrime[1] = false; // 0 и 1 не являются простыми числами

    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) { // Если i - простое число
            // Обозначаем все кратные i как составные
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Выводим простые числа
    std::cout << "Простые числа до " << n << ":\n";
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;

    // Запрашиваем у пользователя верхнюю границу
    std::cout << "Введите верхнюю границу для поиска простых чисел: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "Нет простых чисел в данном диапазоне." << std::endl;
    } else {
        sieveOfEratosthenes(n);
    }

    return 0;
}

