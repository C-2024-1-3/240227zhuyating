/*#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "输入X= ";
	cin >> x;
	if (0 < x && x < 10) {
		if ( x <5) {
			if (1 <= x && x < 5) {
				y = 2 / (4 * x) + 1;
			}
			else y =(-2)* x + 3;
		}
		
		else {
			y = x * x;
		}
		cout << "输出y= " << y << endl;
	}
	else cout << "x范围应为 0<x<10" << endl;
	return 0;
}*/

#include <iostream>
int main23() {
    double s1, s2, s3;
    std::cout << "输入三角形的第一条边: ";
    std::cin >> s1;
    std::cout << "输入三角形的第二条边: ";
    std::cin >> s2;
    std::cout << "输入三角形的第三条边: ";
    std::cin >> s3;
    // 判断三边是否能构成三角形：任意两边之和大于第三边
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
        double c = s1 + s2 + s3;
        std::cout << "三角形的周长为=" << c << std::endl;
        // 判断是否为等腰三角形
        if (s1 == s2 || s1 == s3 || s2 == s3) {
            std::cout << "该三角形是等腰三角形" << std::endl;
        }
        else {
            std::cout << "该三角形不是等腰三角形" << std::endl;
        }
    }
    else {
        std::cout << "输入的三边不能构成三角形" << std::endl;
    }

    return 0;
}