#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::ifstream infile("input.txt");
    std::ofstream outfile("output.txt");

    if (!infile.is_open() || !outfile.is_open()) {
        std::cerr << "Ошибка открытия файлов!" << std::endl;
        return 1;
    }

    char ch;
    // Читаем файл посимвольно, включая пробельные символы
    while (infile.get(ch)) {
        char lower_ch = std::tolower(static_cast<unsigned char>(ch));
        
        // Проверяем, входит ли символ во фразу "user agreement"
        if (lower_ch == 'u' || lower_ch == 's' || lower_ch == 'e' || 
            lower_ch == 'r' || lower_ch == 'a' || lower_ch == 'g' || 
            lower_ch == 'm' || lower_ch == 'n' || lower_ch == 't') {
            continue; // Пропускаем символ
        }
        
        // Если символ прошел проверку, записываем его в выходной файл
        outfile.put(ch);
    }

    infile.close();
    outfile.close();
    return 0;
}
