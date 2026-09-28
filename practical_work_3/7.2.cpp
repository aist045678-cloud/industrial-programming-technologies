#include <iostream>
using namespace std;

int getDayToTop(int h, int a, int b) {
    if (a >= h) return 1;
    if (a <= b) return -1;

    int height = 0;
    int day = 0;

    while (true) {
        day++;
        height += a;

        if (height >= h) return day;

        height -= b;
    }
}

int main() {
    int h, a, b;
    cout << "Последовательно введите высоту(h), скорость подъема(a) и скорость спуска(b):";
    cin >> h >> a >> b;

    cout << "Количество дней за которое улитка достигнет вершины: " << getDayToTop(h, a, b);
    return 0;
}