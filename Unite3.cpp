/* 1、输入自然数m和n，
（1）求他们的最大公约数（或称最大公因数）。
要求输入、输出在主函数中进行，求公约数由函数实现。
（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）*/
/*#include<iostream>
using namespace std;

//（1）公约数函数
int h1(int a, int b) {
    while (b != 0) {
        int x = b;
        b = a % b;
        a = x;
    }
    return a;
}
//主函数的输入与输出
int main() {
    int  m,n;
    cout << "请分别输入自然数m和n：" << endl;
    cin >> m >> n ;
    int gys = h1(m, n);
    cout << "m和n的最大公约数=" << gys << endl;
	return 0;

//(2)引用参数
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

// 求最大公约数与最小公倍数的函数，使用引用参数
void gcdAndLcm(int m, int n, int&gys, int& gbs) {
    gys = gcd(m, n);
    gbs = m * n / gys;
}


int main() {
    int m, n;
    cout << "请输入自然数m: ";
    cin >> m;
    cout << "请输入自然数n: ";
    cin >> n;

    // 求最大公约数
    int gcdValue = gcd(m, n);
    cout << "最大公约数为: " << gcdValue << endl;

    // 求最大公约数与最小公倍数
    int gcdResult, lcmResult;
    gcdAndLcm(m, n, gcdResult, lcmResult);
    cout << "最大公约数为: " << gcdResult << endl;
    cout << "最小公倍数为: " << lcmResult << endl;


    return 0;
}}*/
/*2.编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
bool is_prime(int num) ,如果num是素数函数返回true，否则返回false；
利用函数is_prime找出前200个素数，并按每行10个输出：
        2     3      5      7    11    13    17    19    23    29

#include <iostream>
#include <cmath>

// 判断一个整数是否为素数的函数
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }   
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int count = 0;//素数的个数；
    int num = 2;//输出的素数；
    while (count < 200) {
        if (is_prime(num)) {
            std::cout << num << " ";
            count++;
            if (count % 10 == 0) {
                std::cout << std::endl;
                //满十换行；
            }
        }
        num++;
    }
    return 0;
}*/
/*3.创建名为mytriangle.h的头文件，包括：
bool is_valid(double side1,double side2,double side3)
double_area(double side1,double side2, double side3)
面积=sqrt(s(s-side1)(s-side2)(s-side3))
其中s=(side1+side2+side3)/2
写测试程序：读取三角形三边长，如输入合法，计算面积，否则输出错误信息。
（测试程序为主模块，即main( )函数所在的CPP文件，头文件mytriangle.h只有函数声明；函数定义写在另一CPP文件mytriangle.cpp）
*/
/*
#ifndef MYTRIANGLE_H
#define MYTRIANGLE_H

// 判断三角形三边是否合法
bool is_valid(double side1, double side2, double side3);
// 计算三角形面积
double area(double side1, double side2, double side3);

#endif

#include "mytriangle.h"
#include <cmath>

// 判断三边是否能构成三角形
bool is_valid(double side1, double side2, double side3) {
    return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
}

// 计算三角形面积
double area(double side1, double side2, double side3) {
    if (is_valid(side1, side2, side3)) {
        double s = (side1 + side2 + side3) / 2;
        return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    else {
        return -1;
    }
}
#include <iostream>
#include "mytriangle.h"

int main() {
    double side1, side2, side3;
    std::cout << "请输入三角形的三条边：";
    std::cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)) {
        double result = area(side1, side2, side3);
        std::cout << "三角形的面积为：" << result << std::endl;
    }
    else {
        std::cout << "输入的三边不能构成三角形，请重新输入。" << std::endl;
    }

    return 0;
}*/
/*5.猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。
第二天又将剩下的桃子吃掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一个桃子，
问，第一天猴子共摘多少桃子（用递归实现）。*/
//自己写的没写出来后找AI也找不出错，破大防呜呜呜
/*#include<iostream>
using namespace std;
int main() {
    //假设前一天共有2n个桃子，则吃了n+1个桃子，后一天剩下n-1个桃子
    //记录count为天的次数
    int n=0, yesn=0, count=0;
    //中间参量，前一天未吃的桃子，后一天未吃的桃子，吃几次桃子；
    cout << "请输入第几天" << endl;
    cin >> count;
    cout << "这一天有几个桃子" << endl;
    cin >> yesn;
    for (;count>0;) {
        yesn = yesn + 1;
        yesn = 2*yesn;
        count--;
    }
    cout << "第一天猴子摘的桃子数=" << yesn << endl;


    return 0;
}*/
//标答在下
/*
#include <iostream>

// 递归函数计算第n天的桃子数
int peach(int n) {
    if (n == 10) {
        return 1;
    }
    else {
        return (peach(n + 1) + 1) * 2;
    }
}

int main() {
    std::cout<< "第一天猴子共摘的桃子数为：" << peach(1) << std::endl;
    return 0;
}*/


