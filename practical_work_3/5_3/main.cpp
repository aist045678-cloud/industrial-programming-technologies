#include <iostream>

#include "TimeCalc.h"
#include "TimeFormatter.h"

int main() {
    int totalSeconds;
    std::cin >> totalSeconds;

    Time time = calculateTime(totalSeconds);
    std::cout << formatTime(time);

    return 0;
}