/*1.打印不同的数：
编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。
*/
/*#include <iostream>
#include <vector>

int main() {
    std::vector<int> shu1;//定义了一个动态数组
    int num;
    for (int i = 0; i < 10; i++) {
        std::cin >> num;//输入一个数，并将这个数存入数组1
        bool isNew = true;
        for (int j = 0; j < shu1.size(); j++) {
            if (shu1[j] == num) {
                isNew = false;//判断这个数是否属于该数组1
                break;
            }
        }
        if (isNew) {
            shu1.push_back(num);//不属于，存入数组1（没重复
        }
    }
    for (int i = 0; i < shu1.size(); i++) {
        std::cout << shu1[i] << " ";//输出数组1
    }
    return 0;
}*/
/*2、起泡排序：
利用起泡排序算法编写一个排序函数。起泡排序算法分若干趟对数组进行处理。每趟处理中，对相邻元素进行比较。
若为降序，则交换；否则，保持原顺序。
此技术被称为起泡排序（bubble sort）或下沉排序（sinking sort），因为较小的值逐渐地“冒泡”到上部，而较大值逐渐下沉到底部。
算法可描述如下：
bool changed = true;
do
{changed = false;
for (int j = 0; j < listSize – 1; j++)
    if (list[j] > list[j+1])
    {
      swap list[j] with list[j+1];
      changed = true;
    }
} while (changed);
很明显，循环结束后，列表变为升序。容易证明do循环最多执行listSize – 1次。
编写测试程序，读入一个含有10个双精度数字的数组，调用函数并显示排列后的数字。*/
/*#include<iostream>
using namespace std;
int main() {
    float list[10];
    int  listSize;
    cout << "请输入10个数"<<endl;
    cin >> list[10];
    bool changed = true;
    do
    {
        changed = false;
        for (int j = 0; j < listSize-1; j++)
            if (list[j] > list[j + 1])
            {
                swap list[j] with list[j + 1];
                changed = true;
            }
            cout<< list[j]<<"";
    } while (changed);
    
    return 0;
}*/
/*#include <iostream>
#include <algorithm>
int main() {
    float list[10];
    int listSize = 10;
    std::cout << "请输入10个数" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> list[i];
    }//将10个数输入数组
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                std::swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
    for (int j = 0; j < listSize; j++) {
        std::cout << list[j] << " ";
    }
    return 0;
}*/
/*
3、游戏：存物柜问题：
一个学校有100个存物柜，100个学生。开学第一天所有存物柜都是关闭的。
第一个学生（记为S1）来到学校后，打开所有的存物柜。
第二个学生S2，从第二个存物柜（记为L2）开始，每隔两个存物柜，将它们关闭。
第三个学生S3从第三个存物柜L3开始，每隔三个，将它们的状态改变（开着的关上，关着的打开）。
学生S4，从L4开始，每隔四个改变它们的状态。学生S5，从L5开始，每隔五个改变状态。
依此类推，直至学生S100改变L100的状态。
当所有学生完成这个过程，那些存物柜是开着的？
编写一个程序求解此问题，显示所有开着的柜子号码，号码之间用一个空格隔开。
提示：使用一个100个布尔型元素的数组，每个元素代表存物柜是开（true）或关（false）。最初所有的储物柜都是关闭的。*/

/*#include<iostream>
using namespace std;
int main() {
    bool  L[101];
    //开学第一天所有存物柜都是关闭的
    for (int i=1;i<=100;i++) {
        L[i] = false;
    }
    //每次来一个学生
    for (int s = 1; s <= 100; s++) {
        for (int l = s;l<=100;l+=s隔学生学号的个数) {
            L[l] = !L[l];//改变柜子的状态
        }
    }
    for (int i=1; i <= 100; i++) {
        if (L[i]) {
            cout << i << " ";
        }
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    bool lockers[101];// 存物柜状态数组，下标从1到100，所以定义101个元素，0号元素不用
    for (int i = 1; i <= 100; i++) {
        lockers[i] = false;// 初始化为关闭状态
    }

    for (int student = 1; student <= 100; student++) {
        for (int locker = student; locker <= 100; locker += student) {
            lockers[locker] = !lockers[locker];
        }
    }

    for (int i = 1; i <= 100; i++) {
        if (lockers[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}*/
/*4.合并两个排列好的数组：
编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
使用size1+size2次比较实现函数。
编写测试程序，提示用户输入两个排列好的数组，并显示合并以后的数组。下面是一个运行样例。
注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。假定数组大小不超过80。
*/
/*
#include <iostream>
using namespace std;

// 合并两个已排序的数组
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    int list1[80], list2[80], list3[160];
    int size1, size2;

    // 输入第一个数组
    cout << "Enter list1: ";
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }

    // 输入第二个数组
    cout << "Enter list2: ";
    cin >> size2;
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }

    merge(list1, size1, list2, size2, list3);

    // 输出合并后的数组
    cout << "The merged list is ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}*/
/*检验子串：
编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
int indexOf(const char s1[], const char s2[])
编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。
#include<iostream>
#include <stdio.h>
#include <string.h>

// 函数用于判断s1是否是s2的子串，如果是返回下标，否则返回 -1
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j]!= s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}

// 测试程序
int main() {
    char s1[100], s2[100];
    printf("请输入第一个字符串s1: ");
    scanf("%s", s1);
    printf("请输入第二个字符串s2: ");
    scanf("%s", s2);
    int result = indexOf(s1, s2);
    if (result!= -1) {
        printf("%s是%s的子串，下标为 %d\n", s1, s2, result);
    } else {
        printf("%s不是%s的子串\n", s1, s2);
    }
    return 0;
}*/
/*6、字符串中每个字母出现的次数：
请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
void count(const char s[], int counts[])
counts是一个有26个元素的整数数组。const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。字母不分大小写，例如字母A和字母a都被看作a。
编写测试程序，读入字符串并调用count函数，显示非零的次数。
#include <iostream>
#include <cctype>

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (std::isalpha(s[i])) {
            char ch = std::tolower(s[i]);
            counts[ch - 'a']++;
        }
    }
}

#include <iostream>
#include <cctype>

int main() {
    int counts[26] = { 0 };
    char s[100];
    std::cout << "Enter a string: ";
    std::cin.getline(s, 100);
    count(s, counts);
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            std::cout << static_cast<char>('a' + i) << ": " << counts[i] << std::endl;
        }
    }
    return 0;
}*/
//4.7.1
/*#include <iostream>
using namespace std;
    void main(){

       int i,j,*pi,*pj;     //此处的*表示定义指针变量，而非间接运算符
       pi=&i;
       pj=&j;
       i=5;j=7;
       cout << i << '\t' << j << '\t' << pi << '\t' << pj;
       cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
    }*/
//4.7.2
/*#include <iostream>
    int main()   //C语言程序，要了解
    {
        int a[] = { 1,2,3 };
        int* p, i;
        p = a;    //将数组a首地址送给p
        for (i = 0; i < 3; i++)
            std:: printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //与cout功能差不多
    }*/
    //4.7.4
/*#include <iostream>

    using namespace std;

    int* f() {
        int* list = new int[4] {1, 2, 3, 4};
        return list;
    }

    int main() {
        int* p = f();
        cout << p[0] << endl;
        cout << p[1] << endl;
        delete[] p;
        return 0;
    }*/
    //4.8(1
/*#include<iostream>
#include <stdio.h>
#include <string.h>

// 函数用于判断s1是否是s2的子串，如果是返回下标，否则返回 -1
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}

// 测试程序
int main() {
    char s1[100], s2[100];
    printf("请输入第一个字符串s1: ");
    scanf("%s", s1);
    printf("请输入第二个字符串s2: ");
    scanf("%s", s2);
    int result = indexOf(s1, s2);
    if (result != -1) {
        printf("%s是%s的子串，下标为 %d\n", s1, s2, result);
    }
    else {
        printf("%s不是%s的子串\n", s1, s2);
    }
    return 0;*/
/*4.8.2
编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，并在主函数中测试。函数原型 int parseHex(const char* const hexString);
如：调用函数 parseHex(“A5”); 返回165*/
/*#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
        int result = 0;
        int power = 0;
        for (int i = strlen(hexString) - 1; i >= 0; i--) {
            char c = hexString[i];
            int digit;
            if (isdigit(c)) {
                digit = c - '0';
            }
            else if (c >= 'a' && c <= 'f') {
                digit = c - 'a' + 10;
            }
            else if (c >= 'A' && c <= 'F') {
                digit = c - 'A' + 10;
            }
            else {
                // 处理非法字符，可以选择抛出异常或者返回错误值
                return -1;
            }
            result += digit * static_cast<int>(pow(16, power));
            power++;
        }
        return result;
}
int main() { 
    const char* hexStr = "1A";
    int num = parseHex(hexStr);     
    std::cout << "The decimal value of " << hexStr << " is " << num << std::endl;    
    return 0;
}*/
//(3) 主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，动态调试观察指针及指针指向的内容；
//设计一个函数对数组由小到大排序；主程序中用指针方式输出数组元素；最后释放数组内存（delete）。
#include <iostream>
#include <iomanip>

// 冒泡排序函数
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    std::cout << "请输入数组元素个数: ";
    std::cin >> size;
    int* arr = new int[size];
    std::cout << "请输入数组元素: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // 调用排序函数
    sortArray(arr, size);

    // 指针方式输出数组元素
    std::cout << "排序后的数组元素为: ";
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(5) << arr[i];
    }
    std::cout << std::endl;

    // 释放数组内存
    delete[] arr;
    return 0;
}

