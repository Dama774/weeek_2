#include <iostream>

int main() {
    int age;

    std::cout << "Введите ваш возраст: ";
    std::cin >> age;

    // Проверка на корректность ввода
    if (std::cin.fail() || age < 0) {
        std::cout << "Пожалуйста, введите корректное целое число." << std::endl;
        return 1;
    }

    // Переменная для хранения правильного склонения
    std::string suffix;

    // Определяем склонение с помощью if-else
    if (age % 10 == 1 && age % 100 != 11) {
        suffix = "год";
    } else if ((age % 10 >= 2 && age % 10 <= 4) && (age % 100 < 12 || age % 100 > 14)) {
        suffix = "года";
    } else {
        suffix = "лет";
    }

    // Вывод результата
    std::cout << age << " " << suffix << std::endl;

    return 0;
}

