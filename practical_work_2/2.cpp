#include <iostream> // Подключаем библиотеку для работы с вводом и выводом (чтобы печатать на экране и читать с клавиатуры)
#include <vector> // Подключаем библиотеку для работы с динамическими массивами (векторами)
#include <cstdint>// Подключаем библиотеку с точными типами чисел (например, uint64_t - целое число на 64 бита)
using namespace std; // Используем стандартное пространство имён

// Задача 2: F(n) = 1! * 2! * ... * n!

// Объявляем функцию calcF, которая возвращает результат типа uint64_t (большое целое число)
uint64_t calcF(int n) {
    if (n <= 0) return 1; // Если n меньше или равно 0, сразу возвращаем 1

    uint64_t res = 1;
    uint64_t fact = 1;

    
    for (int i = 1; i <= n; i++) {
        fact *= i;
        res *= fact;
    }
    return res; // Возвращаем итоговое значение res туда, откуда вызвали функцию
}

// Задача 3: если A = 0, то B = 2; если A = 1, то B = 1

// Объявляем функцию task3
void task3() {
    int A;
    cout << "Задача 3. Введите A (0 или 1): ";
    cin >> A;

    int B = 2 - A;

    cout << "B = " << B << endl;
}

// Задача 4: слияние двух отсортированных массивов

// Объявляем функцию mergeArrays
void mergeArrays(const vector<int>& A, const vector<int>& B) {
    int i = 0, j = 0; // Создаём два счётчика: i для первого массива и j для второго

    cout << "Объединенный массив: ";

    while (i < A.size() && j < B.size()) {
        if (A[i] <= B[j]) {
            cout << A[i] << " ";
            i++;
        } else {
            cout << B[j] << " ";
            j++;
        }
    }

    // Дописываем остатки
    while (i < A.size()) {
        cout << A[i] << " ";
        i++;
    }
    while (j < B.size()) {
        cout << B[j] << " ";
        j++;
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian"); // Настраиваем программу на работу с русским текстом

    // Задача 2
    cout << "Задача 2." << endl;
    int n;
    cout << "Введите n: ";
    cin >> n;

    if (n < 0) {
        cerr << "Ошибка: n должно быть >= 0" << endl;
    } else if (n > 20) {
        cerr << "Внимание: будет переполнение!" << endl;
        cout << "F(" << n << ") = (очень большое число)" << endl;
    } else {
        cout << "F(" << n << ") = " << calcF(n) << endl;
    }
    cout << endl;

    // Задача 3
    cout << "Задача 3." << endl;
    task3();
    cout << endl;

    // Задача 4
    cout << "Задача 4." << endl;

    vector<int> A = {1, 3, 5, 7};
    vector<int> B = {2, 4, 6, 8, 10};

    cout << "A: ";
    for (int x : A) cout << x << " ";
    cout << "\nB: ";
    for (int x : B) cout << x << " ";
    cout << endl;

    mergeArrays(A, B);

    return 0;
}