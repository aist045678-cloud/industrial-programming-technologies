#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << 0 << endl;
        return 0;
    }

    int stack[1000];
    int top = 0;
    int removed_count = 0;

    for (int i = 0; i < n; i++) {
        int current;
        cin >> current;

        if (top > 0 && stack[top - 1] == current) {
            top--;
            removed_count += 2;
        } else {
            stack[top] = current;
            top++;
        }
    }

    cout << removed_count << endl;
    return 0;
}
