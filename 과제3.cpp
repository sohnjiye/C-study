#include<iostream>
using namespace std;

int main() {
	int a = 10; // ���� a�� ���� 10���� ����
	int* ptr = &a; // ������ ���� �� a�� �ּ� ����
	cout << "���� a�� �ּҴ� : " << &a << endl;
	cout << "a�� �� : " << *ptr << endl; //ptr�� a�� �ּ� ����Ǿ������Ƿ� *�� a�� ���� �� ��ȯ

	return 0;
}