#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159;

	// 1�ܰ�: ������ �б�
	double radius;
	cout << "�������� �Է��ϼ���: ";
	cin >> radius;

	//2�ܰ�: ����, �ѷ� ���
	double circlearea = radius * radius * PI;
	double circlecircum = 2 * PI * radius;
	double outsquare = 4 * radius * radius;
	double insquare = 2 * radius * radius;

	//3�ܰ�: ����, �ѷ� ���
	cout << "���� ����: " << circlearea << endl;
	cout << "���� �ѷ�: " << circlecircum << endl;
	cout << "�����ϴ� ���簢���� ����: " << outsquare << endl;
	cout << "�����ϴ� ���簢���� ����: " << insquare << endl;

	return 0;
}