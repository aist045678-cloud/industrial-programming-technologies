#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <cctype>

int main() {
    std::ifstream infile("input.txt");
    std::ofstream outfile("output.txt");

    if (!infile.is_open() || !outfile.is_open()) {
        std::cerr << "Ошибка открытия файлов!" << std::endl;
        return 1;
    }

    // Множество букв из фразы "user agreement" в нижнем регистре для быстрого поиска
    std::unordered_set<char> chars_to_remove = {'u', 's', 'e', 'r', 'a', 'g', 'm', 'n', 't'};

    std::string text;
    std::string line;
    while (std::getline(infile, line)) {
        text += line + "\n";
    }
    if (!text.empty()) {
        text.pop_back();
    }

    // Удаляем символы с помощью идиомы erase-remove
    text.erase(std::remove_if(text.begin(), text.end(), [&chars_to_remove](char c) {
        return chars_to_remove.count(std::tolower(static_cast<unsigned char>(c))) > 0;
    }), text.end());

    outfile << text;

    infile.close();
    outfile.close();
    return 0;
}
