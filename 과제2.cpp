#include <iostream>
using namespace std;

int main()
{
	int n, i, j;

	cout << "N의 값을 입력하세요: ";  //n의 값 입력받음
	cin >> n;

	if (n == 1) // n이 1일 때
	{
		cout << "*";
	}

	else
	{
		for (int i = 1; i <= n * 2; i++) // i 가 n의 값보다 크거나 같을 때까지 반복
		{
			for (int j = 1; j <= n; j++) // j 가 n의 값보다 크거나 같을 때까지 반복
			{


				if (i % 2 == 0) // 짝수일 때
				{
					if (j % 2 == 0)
						cout << "*";
					else cout << " ";
				}

				else // 홀수일 때
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