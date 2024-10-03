#include <iostream>
#include <string>

int main() {
    std::string day;
    std::string temperature;
    std::string precipitation;
    std::string wind;
    std::string humidity;

    // Запрашиваем день недели
    std::cout << "Введите день недели: ";
    std::cin >> day;

    // Запрашиваем условия погоды
    std::cout << "Введите температуру (жарко/тепло/холодно): ";
    std::cin >> temperature;

    std::cout << "Введите осадки (ясно/облачно/дождь/снег/град): ";
    std::cin >> precipitation;

    std::cout << "Есть ли ветер? (да/нет): ";
    std::cin >> wind;

    std::cout << "Введите влажность (высокая/низкая): ";
    std::cin >> humidity;

    // Проверяем условия для игры в бадминтон
    bool isSunday = (day == "воскресенье");
    bool isGoodWeather = (temperature == "жарко" || temperature == "тепло") &&
                         (precipitation == "ясно" || precipitation == "облачно") &&
                         (wind == "нет") &&
                         (humidity == "низкая");

    if (isSunday && isGoodWeather) {
        std::cout << "Да, вы можете играть в бадминтон!" << std::endl;
    } else {
        std::cout << "Нет, вы не можете играть в бадминтон." << std::endl;
    }

    return 0;
}

