/*1.��д����Ҫ��
(1)�����ݳ�Ա��Ϊ˽�еģ�
(2)�����������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ�֣�
(3)�������ڶ����Ա������
Ȼ���������г��������ʲô��ԱӦָ��Ϊ���õ� ? ʲô��ԱӦָ��Ϊ˽�е� ? ʲô������÷������ж��� ? ʲô������������ⶨ�� ?*/
/*#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ˽�е�(1)
	int hour;
	int minute;
	int sec;
public:
	void in(){ 
		cin >> hour;         
		cin >> minute;        
		cin >>sec; 
	}
	void out() {
		cout <<hour << ":" <<minute << ":" << sec << endl;
	}

};
int main(){
	Time t1;    
	t1.in();     
	t1.out();     
	return 0; 
}*/
//2��


//(2)������Ա���������Դ�ļ�student.cpp
//student.cpp                     �ڴ��ļ��н��к����Ķ���
//student.cpp
/*#include <iostream>
#include "student.h"

void Student::display() {
	std::cout << "num��" << num << std::endl;
	std::cout << "name��" << name << std::endl;
	std::cout << "sex��" << sex << std::endl;
}

void Student::set_value(int n, const char* na, char s) {
	num = n;
	strcpy_s(name, na);
	sex = s;
}
//(3)������������Դ�ļ�main.cpp��
//Ϊ�����һ��������Դ����Ӧ���а�����������Դ�ļ���
//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud;                //�������
	stud.set_value(007, "tcg", 'm');
	stud.display();              //ִ��stud�����display����(
	return 0;
}
//�����Ƹó�������������һ�������ݳ�Ա����ֵ�ĳ�Ա����set_value���ϻ����Բ����С�
*/

/*3����Ҫ��3������������������һ�����ڶ���ĳ������ݳ�Ա����length(��)��width(��)��height(��)��Ҫ���ó�Ա����ʵ�����¹��ܣ�
(1)�ɼ��̷ֱ�����3���������ĳ������ߣ�
(2)���㳤�����������
(3)���3���������������
�������ϻ����Բ����С�*/
/*#include<iostream>
using namespace std;
class cft {
private://���ݳ�Ա����length(��)��width(��)��height(��)��
	int length;
	int width;
	int height;
	int v;
public:
	void input() {
		cin>> length;
		cin>> width;
		cin>> height;
	}//(1)�ɼ��̷ֱ�����3���������ĳ������ߣ�
	void output() {
		cout << "������������" << v << endl;
	}//����������������
	void nodun() {
		v = length * width * height;
	}
};
int main() {
	int i = 1;//��ѭ��������Ū���μ���
	for (;i<4;) {
		cft t1;
		cout << "�������" << i << "��������ĳ������ߣ�" << endl;
		t1.input();
		t1.nodun();
		t1.output();
		i++;
	}
	return 0;
}*/
//4������һ���������飬�ڷ�5��ѧ���ģ�ѧ�ţ��ɼ���������һ������max����ָ������ָ����������������max�������ҳ�5��ѧ������߳ɼ��ߣ��������ѧ�š�
/*
#include <iostream>
#include <string>

class Student {
public:
	Student(int n, int s) : num(n), score(s) {}
	int num;
	int score;
	};

	// ����max���ҳ���߳ɼ��߲������ѧ��
	void max(Student* students[], int size) {
		if (size == 0) {
			return;
		}
		Student* maxStudent = students[0];
		for (int i = 1; i < size; i++) {
			if (students[i]->score > maxStudent->score) {
				maxStudent = students[i];
			}
		}
		std::cout << "��߳ɼ��ߵ�ѧ��Ϊ: " << maxStudent->num << std::endl;
	}

	int main() {
		Student* students[5];
		students[0] = new Student(1, 80);
		students[1] = new Student(2, 90);
		students[2] = new Student(3, 85);
		students[3] = new Student(4, 95);
		students[4] = new Student(5, 75);

		max(students, 5);

		// �ͷŶ�̬������ڴ�
		for (int i = 0; i < 5; i++) {
			delete students[i];
		}
		return 0;
	}*/
/*5������һ������������Point����˽�б���x��y����һ�����(x, y)����ֵ��
���д����ʵ�����¹��ܣ�
���ù��캯�����ݲ������ڶ������ʱ��x��y����ֵ��ʼ��Ϊ��60, 80����
���ù��г�Ա����void setPoint(int i, int j)������ֵ�޸�Ϊ(60 + i, 80 + j)��
���ù��г�Ա����display()����޸ĺ������ֵ��
��������ͨ�����������֤����������*/
#include<iostream>
using namespace std;
class Point {
private:
	int x=60;
	int y=80;
public:
	// ���캯��
	Point() : x(60), y(80) {}

	// �޸�����ĺ���
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}

	// ��ʾ����ĺ���
	void display() {
		std::cout << "(" << x << ", " << y << ")" << std::endl;
	}
	};

	int main() {
		Point p;
		p.display();
		int i, j;
		cout << "�����������������" << endl;
		cin >> i >> j;
		p.setPoint(i,j);
		p.display();
		return 0;
	}
