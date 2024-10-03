#include <iostream>
#include <iomanip> // Для std::setprecision

double squareRoot(double number) {
    if (number < 0) {
        std::cerr << "Ошибка: квадратный корень из отрицательного числа не существует." << std::endl;
        return -1;
    }
    
    double guess = number; // Начальное предположение
    double epsilon = 0.00001; // Точность
    double nextGuess;

    // Итерационная формула Герона
    do {
        nextGuess = (guess + number / guess) / 2; // Формула Герона
        // Проверяем, насколько близки два предположения
        if (std::abs(nextGuess - guess) < epsilon) {
            break; // Если разница меньше epsilon, выходим из цикла
        }
        guess = nextGuess; // Обновляем предположение
    } while (true);

    return nextGuess;
}

int main() {
    double number;

    // Запрашиваем число у пользователя
    std::cout << "Введите число для нахождения квадратного корня: ";
    std::cin >> number;

    double result = squareRoot(number);
    
    if (result != -1) {
        std::cout << "Квадратный корень из " << number << " равен: " << std::setprecision(5) << result << std::endl;
    }

    return 0;
}

