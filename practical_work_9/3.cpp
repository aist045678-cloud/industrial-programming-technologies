#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Исправлено: Возвращены правильные объявления файлов для чтения и записи
    std::ifstream in("input4.txt");
    std::ofstream outfile("output4.txt");

    if (!in || !outfile) {
        std::cerr << "Ошибка открытия файлов!" << std::endl;
        return 1;
    }

    char ch;
    long long num = -1;

    while (in.get(ch)) {
        if (ch >= '0' && ch <= '9') {
            num = (num == -1) ? (ch - '0') : (num * 10 + (ch - '0'));
        } else {
            if (num != -1) {
                std::string bin = "";
                if (num == 0) bin = "0";
                while (num > 0) { 
                    bin = (num % 2 ? "1" : "0") + bin; 
                    num /= 2; 
                }
                outfile << bin;
                num = -1;
            }
            outfile.put(ch);
        }
    }
    
    if (num != -1) {
        std::string bin = "";
        if (num == 0) bin = "0";
        while (num > 0) { 
            bin = (num % 2 ? "1" : "0") + bin; 
            num /= 2; 
        }
        outfile << bin;
    }
    
    in.close();
    outfile.close();
    return 0;
}