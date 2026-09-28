#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); // Настраиваем программу на работу с русским текстом
    int n;
    cout << "Введите количество секунд(n):";
    cin >> n;

    int h = n / 3600;
    int m = (n % 3600) / 60;
    int s = n % 60;

    cout << h << ':'
         << setw(2) << setfill('0') << m << ':'
         << setw(2) << setfill('0') << s;

    return 0;
}