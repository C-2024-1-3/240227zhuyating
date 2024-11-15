#include <iostream>
int main24() {
    double num1, num2;
    char op;
    std::cout << "请输入: ";
    std::cin >> num1;
    std::cout << "请输入运算符(+ - * / %): ";
    std::cin >> op;
    std::cout << "请输入: ";
    std::cin >> num2;

    switch (op) {
    case '+':
        std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 == 0) {
            std::cerr << "除数不能为0！" << std::endl;
        }
        else {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            std::cerr << "除数不能为0！" << std::endl;
        }
        else {
            //以下转换类型，可能精度损失
            std::cout << static_cast<int>(num1) << " % " << 
            static_cast<int>(num2) << " = " <<
            static_cast<int>(num1) % static_cast<int>(num2) << std::endl;
        }
        break;
    default:
        std::cerr << "运算符非法！" << std::endl;
    }

    return 0;
}