#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Важно: do...while выполнится хотя бы один раз.
    // Поэтому проверка n <= 0 на старте строго обязательна.
    if (n <= 0) {
        cout << 0 << endl;
        return 0;
    }

    int stack[1000];
    int top = 0;
    int removed_count = 0;

    int count = 0;

    // Цикл DO...WHILE сначала делает шаг, а потом проверяет условие
    do {
        int current;
        cin >> current;

        if (top > 0 && stack[top - 1] == current) {
            top--;
            removed_count += 2;
        } else {
            stack[top] = current;
            top++;
        }

        count++;
    } while (count < n); // Условие проверяется в самом конце

    cout << removed_count << endl;
    return 0;
}
