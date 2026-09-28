#include <iostream>

#include "SnailCalc.h"

int getDayToTop(int h, int a, int b) {
    if (a >= h) return 1;
    if(a<b && a<h) {
        std::cout << "Никогда не достигнет вершины";
        return -1;
    }

    int height = 0;
    int day = 0;

    while (true) {
        day++;
        height += a;

        if (height >= h) return day;

        height -= b;
    }
}