#include <iostream>

// Итеративная функция быстрого возведения в степень
double fastPowerIterative(double base, long long exp) {
    if (exp < 0) {
        base = 1.0 / base;
        exp = -exp;
    }
    double result = 1.0;
    while (exp > 0) {
        if (exp & 1) { // Если текущая цифра в конце — единица (то есть степень нечётная прямо сейчас)
            result *= base;//самовозводим в квадрат
        }
        base *= base;  // Возводим основание в квадрат
        exp >>= 1;     // Сдвигаем степень вправо (деление на 2)
    }
    return result;
}

int main() {
    double base = 2;
    long long exp = 10;
    std::cout << base << "^" << exp << " = " << fastPowerIterative(base, exp) << std::endl;
    return 0;
}
