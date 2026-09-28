#include <iostream>
using namespace std;

class Snail {
private:
    int h, a, b;

public:
    Snail(int height, int up, int down) {
        h = height;
        a = up;
        b = down;
    }

    int daysToTop() const {
        if (a >= h) return 1;
        if(a<b && a<h) {
            cout << "Никогда не достигнет вершины";
            return -1;
        }

        return 1 + (h - a + (a - b) - 1) / (a - b);
    }
};

int main() {
    int h, a, b;
    cout << "Последовательно введите высоту(h), скорость подъема(a) и скорость спуска(b):";
    cin >> h >> a >> b;

    Snail snail(h, a, b);
    cout << "Количество дней за которое улитка достигнет вершины: " <<snail.daysToTop();

    return 0;
}