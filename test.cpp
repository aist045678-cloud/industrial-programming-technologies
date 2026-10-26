#include <iostream>

int main() {
    // Объявление переменных
    double y;
    double z;
    double f;

    // Ввод значений коэффицентов
    std::cout << "Введите значение y: ";
    std::cin >> y;

    std::cout << "Введите значение z: ";
    std::cin >> z;

    //Упрощение функции: 4(7x - 5y) - 7(4x - 2z) = 14z - 20y.
    f = 14 * z - 20 * y;

    // Вывод
    std::cout << "Значение выражения: " << f << '\n';

    return 0;
}