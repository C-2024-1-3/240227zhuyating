/* 1��������Ȼ��m��n��
��1�������ǵ����Լ������������������
Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
��2���ں����������Լ������С������������ʾ��ʹ�����ò�����*/
/*#include<iostream>
using namespace std;

//��1����Լ������
int h1(int a, int b) {
    while (b != 0) {
        int x = b;
        b = a % b;
        a = x;
    }
    return a;
}
//�����������������
int main() {
    int  m,n;
    cout << "��ֱ�������Ȼ��m��n��" << endl;
    cin >> m >> n ;
    int gys = h1(m, n);
    cout << "m��n�����Լ��=" << gys << endl;
	return 0;

//(2)���ò���
#include <iostream>
using namespace std;

// �����Լ���ĺ���
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// �����Լ������С�������ĺ�����ʹ�����ò���
void gcdAndLcm(int m, int n, int&gys, int& gbs) {
    gys = gcd(m, n);
    gbs = m * n / gys;
}


int main() {
    int m, n;
    cout << "��������Ȼ��m: ";
    cin >> m;
    cout << "��������Ȼ��n: ";
    cin >> n;

    // �����Լ��
    int gcdValue = gcd(m, n);
    cout << "���Լ��Ϊ: " << gcdValue << endl;

    // �����Լ������С������
    int gcdResult, lcmResult;
    gcdAndLcm(m, n, gcdResult, lcmResult);
    cout << "���Լ��Ϊ: " << gcdResult << endl;
    cout << "��С������Ϊ: " << lcmResult << endl;


    return 0;
}}*/
/*2.��д�������㣺����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
bool is_prime(int num) ,���num��������������true�����򷵻�false��
���ú���is_prime�ҳ�ǰ200������������ÿ��10�������
        2     3      5      7    11    13    17    19    23    29

#include <iostream>
#include <cmath>

// �ж�һ�������Ƿ�Ϊ�����ĺ���
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
    int count = 0;//�����ĸ�����
    int num = 2;//�����������
    while (count < 200) {
        if (is_prime(num)) {
            std::cout << num << " ";
            count++;
            if (count % 10 == 0) {
                std::cout << std::endl;
                //��ʮ���У�
            }
        }
        num++;
    }
    return 0;
}*/
/*3.������Ϊmytriangle.h��ͷ�ļ���������
bool is_valid(double side1,double side2,double side3)
double_area(double side1,double side2, double side3)
���=sqrt(s(s-side1)(s-side2)(s-side3))
����s=(side1+side2+side3)/2
д���Գ��򣺶�ȡ���������߳���������Ϸ�������������������������Ϣ��
�����Գ���Ϊ��ģ�飬��main( )�������ڵ�CPP�ļ���ͷ�ļ�mytriangle.hֻ�к�����������������д����һCPP�ļ�mytriangle.cpp��
*/
/*
#ifndef MYTRIANGLE_H
#define MYTRIANGLE_H

// �ж������������Ƿ�Ϸ�
bool is_valid(double side1, double side2, double side3);
// �������������
double area(double side1, double side2, double side3);

#endif

#include "mytriangle.h"
#include <cmath>

// �ж������Ƿ��ܹ���������
bool is_valid(double side1, double side2, double side3) {
    return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
}

// �������������
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
    std::cout << "�����������ε������ߣ�";
    std::cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)) {
        double result = area(side1, side2, side3);
        std::cout << "�����ε����Ϊ��" << result << std::endl;
    }
    else {
        std::cout << "��������߲��ܹ��������Σ����������롣" << std::endl;
    }

    return 0;
}*/
/*5.���ӳ��ң����ӵ�һ��ժ�������ӣ���������һ�룬������񫣬�ֳ���һ����
�ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ����ˣ�����10�죬����ֻʣ���һ�����ӣ�
�ʣ���һ����ӹ�ժ�������ӣ��õݹ�ʵ�֣���*/
//�Լ�д��ûд��������AIҲ�Ҳ������ƴ��������
/*#include<iostream>
using namespace std;
int main() {
    //����ǰһ�칲��2n�����ӣ������n+1�����ӣ���һ��ʣ��n-1������
    //��¼countΪ��Ĵ���
    int n=0, yesn=0, count=0;
    //�м������ǰһ��δ�Ե����ӣ���һ��δ�Ե����ӣ��Լ������ӣ�
    cout << "������ڼ���" << endl;
    cin >> count;
    cout << "��һ���м�������" << endl;
    cin >> yesn;
    for (;count>0;) {
        yesn = yesn + 1;
        yesn = 2*yesn;
        count--;
    }
    cout << "��һ�����ժ��������=" << yesn << endl;


    return 0;
}*/
//�������
/*
#include <iostream>

// �ݹ麯�������n���������
int peach(int n) {
    if (n == 10) {
        return 1;
    }
    else {
        return (peach(n + 1) + 1) * 2;
    }
}

int main() {
    std::cout<< "��һ����ӹ�ժ��������Ϊ��" << peach(1) << std::endl;
    return 0;
}*/


