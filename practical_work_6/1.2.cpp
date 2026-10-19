#include <iostream>

using namespace std;
//создаем матрицу
int wall[105][105];

int main() {
    int n;
    cin >> n;

    // Заполняем матрицу
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n - 1) {
                wall[i][j] = 0;
            } else if (i + j == n - 1) {
                wall[i][j] = 1;
            } else {
                wall[i][j] = 2;
            }
        }
    }

    // Выводим матрицу
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << wall[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
