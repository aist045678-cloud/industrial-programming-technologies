#include <iostream>

#include "TimeCalc.h"
#include "TimeFormatter.h"

int main() {
    int totalSeconds;
    std::cout << "Введите количество секунд(n):";
    std::cin >> totalSeconds;

    Time time = calculateTime(totalSeconds);
    std::cout << formatTime(time);

    return 0;
}