#include <iostream>
#include <string>

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // 1. Открываем файловые потоки для чтения из двух разных файлов
    std::ifstream fileX("input2.txt"); // Файл с монологом Джорджа Карлина (Строка X)
    std::ifstream fileY("input3.txt"); // Файл со стендапом Данилы (Строка Y)

    // 2. Проверяем, что оба файла успешно открылись
    if (!fileX.is_open() || !fileY.is_open()) {
        std::cerr << "Ошибка: Не удалось открыть файлы input2.txt или input3.txt!" << std::endl;
        return 1;
    }

    std::string X = "";
    std::string Y = "";
    std::string buffer;

    while (std::getline(fileX, buffer)) {
        X += buffer + "\n";
    }

    if (!X.empty()) X.pop_back();

    while (std::getline(fileY, buffer)) {
        Y += buffer + "\n";
    }

    if (!Y.empty()) Y.pop_back();

    // Закрываем файлы, так как данные уже скопированы в оперативную память (в X и Y)
    fileX.close();
    fileY.close();


    size_t found = Y.find(X);

    if (found != std::string::npos) {
        std::cout << "YES" << std::endl; // Y является подстрокой X
    } else {
        std::cout << "NO" << std::endl;  // Y НЕ является подстрокой X
    }

    return 0;
}
