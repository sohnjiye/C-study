#include <iostream> //�����Ϸ��� ��ó���� ȣ��, Ű���� �Է� �� ȭ�� ��½ÿ� �ʿ�
#include <string> //���ڿ��� ũ�� ������ ����
using namespace std; //std:: ������ ���� ����

int main() //C++ ���α׷��� ������
{
	cout << "����� �̸��� �����Դϱ�?";
	char name[11]; //����10, �ѱ�5
	cin.getline(name, 11, '\n'); //Enter�Է±��� �ִ� 10�� ���� �Է� ����
	cout << "�ݰ����ϴ�." << name << "��" << endl;

	int appleprice{}, bananaprice{}, orangeprice{}; //����(integer)�� Ÿ������ �Է¹���
	int apple{}, banana{}, orange{}; //������ ������ �Է¹���
	int total{};
	//�Ѱ��� - 500(����)�� ������ �����
	
	cout << "apple�� ������ ���Դϱ�?";
	cin >> appleprice; //��������� �Է¹���
	cout << "banana�� ������ ���Դϱ�?";
	cin >> bananaprice;
	cout << "orange�� ������ ���Դϱ�?";
	cin >> orangeprice;
	
	cout << "apple�� � �ֽ��ϱ�?";  //����� ������ �Է¹���
	cin >> apple;
	cout << "banana�� � �ֽ��ϱ�?";
	cin >> banana;
	cout << "orange�� � �ֽ��ϱ�?";
	cin >> orange;

	cout << "��" << (appleprice * apple) + (bananaprice * banana) + (orangeprice * orange) - 500 << "�� �Դϴ�." << endl;
	
	return 0;
}