#include <iostream>
int main() {
    double price = 0.8;
    int d = 1;
    int num = 2;
    int tot = num;
    double cost = num * price;
    while (tot + num * 2 <= 100) {
        num = num * 2;
        tot += num;
        cost += num * price;
        d++;
    }
    double average = cost;
        std::cout << "每天平均花费: " << average << " 元" << std::endl;
    return 0;
}
//以下为2.8
/*#include <iostream>
#include <cmath>
using namespace std;
double xn, xn1,a;
int main() {
    cout << "请输入要开方的数=";
    cin >> a; 
    xn=a;
    xn1 = (xn + a / xn) * 0.5;
    for (;fabs(xn1 - xn) < 1e-5;xn=xn1) 
    {
          xn1 = (xn + a / xn) *0.5;
    }
    if (a < 0) {
        cout << "输入的数为负数，其平方根为虚数，这里给出其绝对值的平方根乘以i: " << xn1 << "i" <<endl;
    }
    else cout << "所求平方根为" <<xn1 << endl;
    return 0;
    AI也检查不出哪里错了，输入9答案不对；
}*/
/*#include <iostream>
#include <cmath>
int main() {
    double a;
    std::cout << "请输入一个数a: ";
    std::cin >> a;
    double xn = a;
    double xn1;

    do {
        xn1 = 0.5 * (xn + a / xn);
        if (std::fabs(xn1 - xn) < 1e-5) {
            break;
        }
        xn = xn1;
    } while (true);

    if (a < 0) {
        std::cout << "输入的数为负数，其平方根为虚数，这里给出其绝对值的平方根乘以i: "
                  << xn1 << "i" << std::endl;
    }
    else {
        std::cout << "a的平方根为: " << xn1 << std::endl;
    }return 0;
}
*/


    