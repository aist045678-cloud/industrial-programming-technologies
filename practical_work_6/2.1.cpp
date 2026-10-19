#include <iostream>

using namespace std;

char grid[35][35];

int main() {
    int n, m, w;
    cin >> n >> m >> w;

    // Заполняем нулями
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            grid[i][j] = '0';
        }
    }

    // Расставляем грибы
    for (int i = 0; i < w; i++) {
        int r, c;
        cin >> r >> c;
        grid[r - 1][c - 1] = '*';
    }

    // Считаем окружение
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (grid[r][c] == '*') {
                cout << '*';
            } else {
                int count = 0;
                for (int dr = -1; dr <= 1; dr++) {
                    for (int dc = -1; dc <= 1; dc++) {
                        int nr = r + dr;
                        int nc = c + dc;
                        if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == '*') {
                            count++;
                        }
                    }
                }
                cout << count;
            }
        }
        cout << endl;
    }
    return 0;
}
