#include <iostream>
#include <fstream>

int main() {
    std::ifstream words;
    words.open("..\\words.txt");
    if (!words.is_open()) {
        std::cout << "Open file error!";
        return 666;
    }
    std::string temp;
    int num = 0;
    while (!words.eof()) {
        words >> temp;
        if (temp == "shift") ++num;
    }
    words.close();
    std::cout << num;
    return 0;
}
