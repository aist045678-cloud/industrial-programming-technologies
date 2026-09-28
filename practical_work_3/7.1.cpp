#include <iostream>

using namespace std;

int main(){
    int h, a, b;
    cout << "Последовательно введите высоту(h), скорость подъема(a) и скорость спуска(b):";
    cin >> h >> a >> b;

    int height = 0;
    int day = 0;

    if(a<b && a<h) {
        cout << "Никогда не достигнет вершины";
        return 0;
    }

    while (height < h) {
        day++;
        height += a;

        if (height >= h) {
            break;
        }

        height -= b;
    }

    cout << "Количество дней за которое улитка достигнет вершины: "<< day;

    return 0;
}