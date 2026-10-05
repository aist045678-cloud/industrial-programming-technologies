#include <cmath>
#include <iomanip>
#include <iostream>

constexpr double EPS = 0.000000001;

// Сравнивает вещественное число с нулём с учётом погрешности.
bool IsZero(double value) {
    return std::abs(value) < EPS;
}

// Определяет, является ли целое число простым.
bool IsPrime(long long number) {
    if (number < 2) {
        return false;
    }

    // Если у числа есть делитель, то хотя бы один из делителей
    // не превосходит квадратный корень из числа.
    for (long long div = 2; div <= number / div; ++div) {
        if (number % div == 0) {
            return false;
        }
    }

    return true;
}

// Выводит информацию о корнях уравнения ax^2 + bx + c = 0.
void printRoots(double a, double b, double c) {
    // При a = 0 уравнение не является квадратным:
    // оно может быть линейным или постоянным.
    if (IsZero(a)) {
        if (IsZero(b)) {
            if (IsZero(c)) {
                std::cout << "Любое действительное число является корнем.\n";
            } else {
                std::cout << "Корней нет.\n";
            }
        } else {
            const double root = -c / b;
            std::cout << "Один корень: x = " << root << '\n';
        }

        return;
    }

    // Для квадратного уравнения вычисляем дискриминант.
    const double discriminant = b * b - 4.0 * a * c;

    if (discriminant > EPS) {
        const double sqrtDiscriminant = std::sqrt(discriminant);
        const double firstRoot = (-b - sqrtDiscriminant) / (2.0 * a);
        const double secondRoot = (-b + sqrtDiscriminant) / (2.0 * a);

        std::cout << "Два действительных корня: "
                  << "x1 = " << firstRoot
                  << ", x2 = " << secondRoot << '\n';
    } else if (IsZero(discriminant)) {
        const double root = -b / (2.0 * a);

        std::cout << "Один действительный корень: x = "
                  << root << '\n';
    } else {
        std::cout << "Действительных корней нет.\n";
    }
}

int main() {
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    char command = '\0';

    // Ввод коэффициентов a, b, c.
    std::cout << "Введите значения коэффициентов a b c через пробелы: ";
    std::cin >> a >> b >> c;

    // Ввод символа варианта: O, f или n.
    std::cout << "Введите одну из доступных команд: O(ФИО), f(корни квадратного многочлена), n(проверка числа на простоту) ";
    std::cin >> command;

    std::cout << std::fixed << std::setprecision(6);

    switch (command) {
        case 'O':
            std::cout << "Milow Denis\n";
            break;

        case 'f':
            printRoots(a, b, c);
            break;

        case 'n': {
            long long number = 0;

            // Дополнительный ввод целого числа.
            std::cout << "Введите число, которое нужно проверить: ";
            std::cin >> number;

            if (IsPrime(number)) {
                std::cout << "Число " << number
                          << " является простым.\n";
            } else {
                std::cout << "Число " << number
                          << " не является простым.\n";
            }

            break;
        }

        default:
            std::cout << "Неизвестный символ варианта.\n";
            break;
    }

    return 0;
}