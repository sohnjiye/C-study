#include <iostream>
using namespace std;

int main()
{
	int n, i, j;

	cout << "N�� ���� �Է��ϼ���: ";  //n�� �� �Է¹���
	cin >> n;

	if (n == 1) // n�� 1�� ��
	{
		cout << "*";
	}

	else
	{
		for (int i = 1; i <= n * 2; i++) // i �� n�� ������ ũ�ų� ���� ������ �ݺ�
		{
			for (int j = 1; j <= n; j++) // j �� n�� ������ ũ�ų� ���� ������ �ݺ�
			{


				if (i % 2 == 0) // ¦���� ��
				{
					if (j % 2 == 0)
						cout << "*";
					else cout << " ";
				}

				else // Ȧ���� ��
				{
					if (j % 2 == 0)
						cout << " ";
					else cout << "*";
				}
			}
			cout << endl;
		}
	}


	
	return 0;
}