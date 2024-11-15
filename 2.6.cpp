#include <iostream>
using namespace std;
// 求最大公约数的函数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// 求最小公倍数的函数
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
//使用已定义好的函数计算；
int main26() {
    int a, b;
    cout << "请输入2个正整数: ";
    cin >> a >>b;
    int x = gcd(a, b);
    int y = lcm(a, b);

    cout << "最大公约数,最小公倍数是: " << x << ","<< y << endl;
    
    return 0;
}