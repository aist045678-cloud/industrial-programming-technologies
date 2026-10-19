#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    string curr = to_string(x);

    for (int step = 1; step < n; step++) {
        string next_seq = "";
        int count = 1;

        for (size_t i = 1; i <= curr.length(); i++) {
            // Если дошли до конца строки или символ сменился
            if (i == curr.length() || curr[i] != curr[i - 1]) {
                next_seq = next_seq + to_string(count) + curr[i - 1];
                count = 1;
            } else {
                count++;
            }
        }
        curr = next_seq;
    }

    cout << curr << endl;
    return 0;
}
