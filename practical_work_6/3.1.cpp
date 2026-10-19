#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    string curr = to_string(x);
    // Это нужно потому, что строки последовательности растут очень быстро
    // и они мгновенно переполнят обычные числовые типы (int или long long).

    for (int step = 1; step < n; step++) {
        string next_seq = ""; // Переменная для сборки следующей (новой) строки
        int i = 0;// Индекс-указатель

        while (i < curr.length()) {
            int count = 1;// Счетчик: каждая новая цифра встречается как минимум 1 раз
            // Внутренний цикл: ищет одинаковые цифры, стоящие подряд.
            while (i + 1 < curr.length() && curr[i] == curr[i + 1]) {
                count++;// Если совпадает, увеличиваем счетчик одинаковых цифр
                i++;// И сдвигаем указатель вперед, чтобы пропустить этот символ
            }
            next_seq = next_seq + to_string(count) + curr[i];
            i++;
        }
        curr = next_seq;
    }

    cout << curr << endl;
    return 0;
}
