/*
#include<iostream>
using namespace std;
int main3()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "int bool:" << sizeof(bool) << endl;
	cout << "int float:" << sizeof(float) << endl;
	return 0;
}
*/
//以下是1.4作业
#include <iostream>
#include <iomanip>
using namespace std;
int main4(){
unsigned int testUnint=65534;//oxfffe
cout << "output in unsigned int 1 type:" << testUnint<< endl;//<<oct;
cout << "output in char type:!" << static_cast<char>(testUnint)<< endl;
cout << "output in short type:" << static_cast<short>(testUnint)<< endl;
/*为什么结果为-2?:当将无符号值强制转换为short（有符号16位）时，
最高位被解释为符号位，这个二进制数表示的是 - 2的补码形式。*/
cout << "output in int type:" << static_cast<int>(testUnint)<< endl;
cout << "output in double type:"<< static_cast <double>(testUnint)<< endl;
cout << "output in double type:" <<setprecision(4)<< static_cast<double>(testUnint)<< endl;
cout << "output in Hex unsigned int type:" <<hex<< testUnint<< endl; //16进制输出
cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8进制输出
double r = 1.01;
int i = static_cast<int>(r);
cout << "实数为: " << r << endl;
cout << "int型数为: " << i<< endl;
system("pause");
return 0;
}
