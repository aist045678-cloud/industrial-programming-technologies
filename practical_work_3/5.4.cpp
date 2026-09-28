#include <iostream>
#include <iomanip>

using namespace std;

class Clock {
private:
    int secondsFromMidnight;

public:
    Clock(int seconds) {
        secondsFromMidnight = seconds;
    }

    void advance(int seconds) {
        secondsFromMidnight = (secondsFromMidnight + seconds) % 86400;
    }

    void show() const {
        int hours = secondsFromMidnight / 3600;
        int minutes = (secondsFromMidnight % 3600) / 60;
        int seconds = secondsFromMidnight % 60;

        cout << hours << ':'
             << setw(2) << setfill('0') << minutes << ':'
             << setw(2) << setfill('0') << seconds;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество секунд(n):";
    int n;
    cin >> n;

    Clock clock(n);
    clock.show();

    return 0;
}