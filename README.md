# #include <iostream>

double celsius_to_fahrenheit(double celsius) {
    double fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}

double fahrenheit_to_celsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}

int main() {
    int choice;
    std::cout << "Виберіть операцію: \n";
    std::cout << "1 - перевести з Цельсія в Фаренгейт\n";
    std::cout << "2 - перевести з Фаренгейта в Цельсій\n";
    std::cin >> choice;

    if (choice == 1) {
        double celsius;
        std::cout << "Введіть температуру в градусах Цельсія: ";
        std::cin >> celsius;

        double fahrenheit = celsius_to_fahrenheit(celsius);
        std::cout << "Температура в градусах Фаренгейта: " << fahrenheit << " °F\n";
    } else if (choice == 2) {
        double fahrenheit;
        std::cout << "Введіть температуру в градусах Фаренгейта: ";
        std::cin >> fahrenheit;

        double celsius = fahrenheit_to_celsius(fahrenheit);
        std::cout << "Температура в градусах Цельсія: " << celsius << " °C\n";
    } else {
        std::cout << "Некоректний вибір операції.\n";
    }

    return 0;
}

