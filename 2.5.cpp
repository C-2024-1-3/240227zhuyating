#include <iostream>
#include <string>
int main25() {
    std::string input;
    std::getline(std::cin, input);
    int letter = 0;
    int space = 0;
    int digit = 0;
    int other = 0;
    for (char c : input) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
            letter++;
        else if (c == ' ') {space++;}
        else if (c >= '0' && c <= '9') { digit++;}
        else {other++;}
    }
    std::cout << "英文字母个数: " << letter << std::endl;
    std::cout << "空格个数: " << space << std::endl;
    std::cout << "数字个数: " << digit << std::endl;
    std::cout << "其他字符个数: " << other << std::endl;
    return 0;
}