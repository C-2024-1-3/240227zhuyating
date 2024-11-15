#include <iostream>
#include <iomanip>//这个学过吗？没有印象。
int main5() {
    double f;
    std::cout << "华氏温度：";
    std::cin >> f;

    double c = (f - 32) * 5.0 / 9.0;
    std::cout << std::fixed <<std::setprecision(2) << "摄氏温度为：" << c << std::endl;

    return 0;
}