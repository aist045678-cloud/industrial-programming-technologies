#include <iostream>

using namespace std;

int main() {
    int n;

    do {
        cout << "Enter the number of students: ";
        cin >> n;
    } while (n < 0 || n > 1000); // Проверка на рамки из условия

    // Если студентов нет, то выводим 0 и закрываем программу
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int students[1000];
    int stack[1000];

    int count = 0;

    // Цикл для заполнения массива студентов
    while (count < n) {
        cin >> students[count];
        count++;
    }

    int removed_count = 0; // Счетчик тех, кто ушел в КФС
    int top = 0;           // Индекс для нашей "вершины стека"

    // 3. Цикл для проверки пар
    for (int i = 0; i < n; i++) {
        int current = students[i];

        // Если в стеке есть элементы и текущий студент совпадает с последним в стеке
        if (top > 0 && stack[top - 1] == current) {
            top--;             // "Удаляем" элемент из стека (сдвигаем указатель назад)
            removed_count += 2;
        }
        else {
            stack[top] = current; // Иначе кладем студента в стек
            top++;                // Сдвигаем указатель вперед
        }
    }

    cout << removed_count << endl;

    return 0;
}
