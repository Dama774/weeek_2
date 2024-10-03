#include <iostream>

int main() {
    int month;
    int year = 2024; // Пример високосного года

    // Проверяем, является ли год високосным
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    std::cout << "Введите номер месяца (1-12): ";
    std::cin >> month;

    // Проверка на корректность ввода
    if (month < 1 || month > 12) {
        std::cout << "Некорректный номер месяца. Пожалуйста, введите число от 1 до 12." << std::endl;
        return 1;
    }

    int days;

    // Определяем количество дней в месяце
    switch (month) {
        case 1: // Январь
        case 3: // Март
        case 5: // Май
        case 7: // Июль
        case 8: // Август
        case 10: // Октябрь
        case 12: // Декабрь
            days = 31;
            break;
        case 4: // Апрель
        case 6: // Июнь
        case 9: // Сентябрь
        case 11: // Ноябрь
            days = 30;
            break;
        case 2: // Февраль
            days = isLeapYear ? 29 : 28;
            break;
        default:
            days = 0; // Это не должно произойти из-за проверки выше
            break;
    }

    // Вывод результата
    std::cout << "Количество дней в месяце " << month << ": " << days << std::endl;

    return 0;
}

