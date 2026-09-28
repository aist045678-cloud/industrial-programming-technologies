#include <iostream>
#include "SnailCalc.h"

using namespace std;

int main() {
    int h, a, b;
    cout << "Последовательно введите высоту(h), скорость подъема(a) и скорость спуска(b):";
    cin >> h >> a >> b;

    cout << "Количество дней за которое улитка достигнет вершины: " << getDayToTop(h, a, b);
    return 0;
}