#include <iostream>
#include <iomanip>

using namespace std;

int getH(int s) {
    return s / 3600;
}

int getM(int s) {
    return (s % 3600) / 60;
}

int getS(int s) {
    return s % 60;
}

int main() {
    int n;
    cout << "Введите количество секунд(n):";
    cin >> n;

    int h = getH(n);
    int m = getM(n);
    int s = getS(n);

    cout << h << ':' << setw(2)
    << setfill('0') << m << ':'
    << setw(2) << setfill('0') << s;

    return 0;
}