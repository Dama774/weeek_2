#include <iostream>

void printPyramid(int height) {
    for (int i = 0; i < height; ++i) {
        // Вывод пробелов для выравнивания
        for (int j = 0; j < height - i - 1; ++j) {
            std::cout << " ";
        }

        // Вывод символов '#' для левой части пирамиды
        for (int j = 0; j <= i; ++j) {
            std::cout << "#";
        }

        // Разделитель с пробелом
        std::cout << " ";

        // Вывод символов '#' для правой части пирамиды
        for (int j = 0; j <= i; ++j) {
            std::cout << "#";
        }

        // Переход на новую строку
        std::cout << std::endl;
    }
}

int main() {
    int height;

    std::cout << "Введите высоту пирамиды: ";
    std::cin >> height;

    if (height <= 0) {
        std::cout << "Высота пирамиды должна быть положительной!" << std::endl;
        return 1;
    }

    printPyramid(height); // Вызов функции для печати пирамиды

    return 0;
}

