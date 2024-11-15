/*#include<iostream>
using namespace std;
int main1()
{
	Int i = k + 1;//错误:1.int为小写   2.k未被定义
	cout << i++ << endl;
	int i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}*/
//改正后代码为：
/*#include<iostream>
using namespace std;
int main1()
{
	int k=1;
	int i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}*/