/*1.��ӡ��ͬ������
��дһ�����򣬶���10������������в�ͬ�����������һ�������ֶ�Σ�ֻ��ӡһ�Σ���
��ʾ��������������һ���µ�ֵ���������һ�����顣���򣬽��䶪����������Ϻ������б���ľ��ǲ�ͬ������
*/
/*#include <iostream>
#include <vector>

int main() {
    std::vector<int> shu1;//������һ����̬����
    int num;
    for (int i = 0; i < 10; i++) {
        std::cin >> num;//����һ�����������������������1
        bool isNew = true;
        for (int j = 0; j < shu1.size(); j++) {
            if (shu1[j] == num) {
                isNew = false;//�ж�������Ƿ����ڸ�����1
                break;
            }
        }
        if (isNew) {
            shu1.push_back(num);//�����ڣ���������1��û�ظ�
        }
    }
    for (int i = 0; i < shu1.size(); i++) {
        std::cout << shu1[i] << " ";//�������1
    }
    return 0;
}*/
/*2����������
�������������㷨��дһ�������������������㷨�������˶�������д���ÿ�˴����У�������Ԫ�ؽ��бȽϡ�
��Ϊ�����򽻻������򣬱���ԭ˳��
�˼�������Ϊ��������bubble sort�����³�����sinking sort������Ϊ��С��ֵ�𽥵ء�ð�ݡ����ϲ������ϴ�ֵ���³����ײ���
�㷨���������£�
bool changed = true;
do
{changed = false;
for (int j = 0; j < listSize �C 1; j++)
    if (list[j] > list[j+1])
    {
      swap list[j] with list[j+1];
      changed = true;
    }
} while (changed);
�����ԣ�ѭ���������б��Ϊ��������֤��doѭ�����ִ��listSize �C 1�Ρ�
��д���Գ��򣬶���һ������10��˫�������ֵ����飬���ú�������ʾ���к�����֡�*/
/*#include<iostream>
using namespace std;
int main() {
    float list[10];
    int  listSize;
    cout << "������10����"<<endl;
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
    std::cout << "������10����" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> list[i];
    }//��10������������
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
3����Ϸ����������⣺
һ��ѧУ��100�������100��ѧ������ѧ��һ�����д�����ǹرյġ�
��һ��ѧ������ΪS1������ѧУ�󣬴����еĴ����
�ڶ���ѧ��S2���ӵڶ�������񣨼�ΪL2����ʼ��ÿ����������񣬽����ǹرա�
������ѧ��S3�ӵ����������L3��ʼ��ÿ�������������ǵ�״̬�ı䣨���ŵĹ��ϣ����ŵĴ򿪣���
ѧ��S4����L4��ʼ��ÿ���ĸ��ı����ǵ�״̬��ѧ��S5����L5��ʼ��ÿ������ı�״̬��
�������ƣ�ֱ��ѧ��S100�ı�L100��״̬��
������ѧ�����������̣���Щ������ǿ��ŵģ�
��дһ�������������⣬��ʾ���п��ŵĹ��Ӻ��룬����֮����һ���ո������
��ʾ��ʹ��һ��100��������Ԫ�ص����飬ÿ��Ԫ�ش��������ǿ���true����أ�false����������еĴ�����ǹرյġ�*/

/*#include<iostream>
using namespace std;
int main() {
    bool  L[101];
    //��ѧ��һ�����д�����ǹرյ�
    for (int i=1;i<=100;i++) {
        L[i] = false;
    }
    //ÿ����һ��ѧ��
    for (int s = 1; s <= 100; s++) {
        for (int l = s;l<=100;l+=s��ѧ��ѧ�ŵĸ���) {
            L[l] = !L[l];//�ı���ӵ�״̬
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
    bool lockers[101];// �����״̬���飬�±��1��100�����Զ���101��Ԫ�أ�0��Ԫ�ز���
    for (int i = 1; i <= 100; i++) {
        lockers[i] = false;// ��ʼ��Ϊ�ر�״̬
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
/*4.�ϲ��������кõ����飺
��д���º������ϲ��������кõ����飬�γ�һ���µ����кõ����顣
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
ʹ��size1+size2�αȽ�ʵ�ֺ�����
��д���Գ�����ʾ�û������������кõ����飬����ʾ�ϲ��Ժ�����顣������һ������������
ע�⣬�������ݵĵ�һ�������������Ԫ�����������������һ���֡��ٶ������С������80��
*/
/*
#include <iostream>
using namespace std;

// �ϲ����������������
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

    // �����һ������
    cout << "Enter list1: ";
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }

    // ����ڶ�������
    cout << "Enter list2: ";
    cin >> size2;
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }

    merge(list1, size1, list2, size2, list3);

    // ����ϲ��������
    cout << "The merged list is ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}*/
/*�����Ӵ���
��д���º���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ������ƥ�䣬����s1��s2�е��±꣬���򷵻بC1��
int indexOf(const char s1[], const char s2[])
��д���Գ��򣬶�������C�ַ���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ���
#include<iostream>
#include <stdio.h>
#include <string.h>

// ���������ж�s1�Ƿ���s2���Ӵ�������Ƿ����±꣬���򷵻� -1
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

// ���Գ���
int main() {
    char s1[100], s2[100];
    printf("�������һ���ַ���s1: ");
    scanf("%s", s1);
    printf("������ڶ����ַ���s2: ");
    scanf("%s", s2);
    int result = indexOf(s1, s2);
    if (result!= -1) {
        printf("%s��%s���Ӵ����±�Ϊ %d\n", s1, s2, result);
    } else {
        printf("%s����%s���Ӵ�\n", s1, s2);
    }
    return 0;
}*/
/*6���ַ�����ÿ����ĸ���ֵĴ�����
��ʹ�����º���ͷ��д�����������ַ�����ÿ����ĸ���ֵĴ�����
void count(const char s[], int counts[])
counts��һ����26��Ԫ�ص��������顣const[0]��const[1]������const[25]�ֱ��¼a��b������z���ֵĴ�������ĸ���ִ�Сд��������ĸA����ĸa��������a��
��д���Գ��򣬶����ַ���������count��������ʾ����Ĵ�����
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

       int i,j,*pi,*pj;     //�˴���*��ʾ����ָ����������Ǽ�������
       pi=&i;
       pj=&j;
       i=5;j=7;
       cout << i << '\t' << j << '\t' << pi << '\t' << pj;
       cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
    }*/
//4.7.2
/*#include <iostream>
    int main()   //C���Գ���Ҫ�˽�
    {
        int a[] = { 1,2,3 };
        int* p, i;
        p = a;    //������a�׵�ַ�͸�p
        for (i = 0; i < 3; i++)
            std:: printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //��cout���ܲ��
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

// ���������ж�s1�Ƿ���s2���Ӵ�������Ƿ����±꣬���򷵻� -1
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

// ���Գ���
int main() {
    char s1[100], s2[100];
    printf("�������һ���ַ���s1: ");
    scanf("%s", s1);
    printf("������ڶ����ַ���s2: ");
    scanf("%s", s2);
    int result = indexOf(s1, s2);
    if (result != -1) {
        printf("%s��%s���Ӵ����±�Ϊ %d\n", s1, s2, result);
    }
    else {
        printf("%s����%s���Ӵ�\n", s1, s2);
    }
    return 0;*/
/*4.8.2
��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�������������������в��ԡ�����ԭ�� int parseHex(const char* const hexString);
�磺���ú��� parseHex(��A5��); ����165*/
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
                // ����Ƿ��ַ�������ѡ���׳��쳣���߷��ش���ֵ
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
//(3) �������н���һ��̬���飨ʹ��new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬��̬���Թ۲�ָ�뼰ָ��ָ������ݣ�
//���һ��������������С������������������ָ�뷽ʽ�������Ԫ�أ�����ͷ������ڴ棨delete����
#include <iostream>
#include <iomanip>

// ð��������
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
    std::cout << "����������Ԫ�ظ���: ";
    std::cin >> size;
    int* arr = new int[size];
    std::cout << "����������Ԫ��: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // ����������
    sortArray(arr, size);

    // ָ�뷽ʽ�������Ԫ��
    std::cout << "����������Ԫ��Ϊ: ";
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(5) << arr[i];
    }
    std::cout << std::endl;

    // �ͷ������ڴ�
    delete[] arr;
    return 0;
}

