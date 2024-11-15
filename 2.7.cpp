#include<iostream>
using namespace std;
int main27()
{
	int n = 1, m;
	cout << "你希望有几行？ ";
	cin >> m;
	for (; n <= m; n++) {
		for (int t=0; t < n; t++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
/*#include <iostream>

int main() {
	for (int i = 1; i <= 5; i++) {  // 控制行数，共5行
		for (int j = 0; j < i; j++) {  // 控制每行的星号数量，第i行有i个星号
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;
}*/