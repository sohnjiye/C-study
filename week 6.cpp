#include <iostream>
using namespace std;

int main()
{
	// �ݾ��� �Է�
	cout << "Enter an amount in double, for example 11.56: ";
	double amount;
	cin >> amount;

	int remainingAmount = static_cast<int>(amount * 100);

	// 1�޷��� ���� ���
	int numberOfOneDollars = remainingAmount / 100;
	remainingAmount = remainingAmount % 100;

	// ���� �ݾ׿��� ���� ���
	int numberOfQuarters = remainingAmount / 25;
	remainingAmount = remainingAmount % 25;

	// ���� �ݾ׿��� ���� ���
	int numberOfDimes = remainingAmount / 10;
	remainingAmount = remainingAmount % 10;

	// ���� �ݾ׿��� ���� ���
	int numberOfNickels = remainingAmount / 5;
	remainingAmount = remainingAmount % 5;

	// ���� �ݾ׿��� ��� ���
	int numberOfPennies = remainingAmount;
	
	// ��� ȭ�� ǥ��
	cout << "Your amount" << amount << "consists of" << endl;
	if (numberOfOneDollars > 0)
	{
		if (numberOfOneDollars > 1)
		{
			cout << numberOfOneDollars << "dollars" << endl;
		}
		else if (numberOfOneDollars = 1)
		{
			cout << numberOfOneDollars << "dollar" << endl;
		}
		else
		{
			;
		}
	}

	if (numberOfQuarters > 0)
	{
		if (numberOfQuarters > 1)
		{
			cout << numberOfQuarters << "quarters" << endl;
		}
		else if (numberOfQuarters = 1)
		{
			cout << numberOfQuarters << "quarter" << endl;
		}
		else
		{
			;
		}
	}

	if (numberOfDimes > 0)
	{
		if (numberOfDimes > 1)
		{
			cout << numberOfDimes << "dimes" << endl;
		}
		else if (numberOfDimes = 1)
		{
			cout << numberOfDimes << "dime" << endl;
		}
		else
		{
			;
		}
	}

	if (numberOfNickels > 0)
	{
		if (numberOfNickels > 1)
		{
			cout << numberOfNickels << "nickels" << endl;
		}
		else if (numberOfNickels = 1)
		{
			cout << numberOfNickels << "nickel" << endl;
		}
		else
		{
			;
		}
	}

	if (numberOfPennies > 0)
	{
		if (numberOfPennies > 1)
		{
			cout << numberOfPennies << "pennies" << endl;
		}
		else if (numberOfPennies = 1)
		{
			cout << numberOfPennies << "penny" << endl;
		}
		else
		{
			;
		}
	}



	// �ǽ� 2.13

	int money;
	double rate;
	double rase = 0;
	rate = (1 + (0.05 / 12));

	cout << "�� ����ݾ��� �Է��ϼ���: ";
	cin >> money;

	rase = (money + rase) * rate;
	cout << "1�� �� �ݾ�: " << rase << endl;
	rase = (money + rase) * rate;
	cout << "2�� �� �ݾ�: " << rase << endl;
	rase = (money + rase) * rate;
	cout << "3�� �� �ݾ�: " << rase << endl;
	rase = (money + rase) * rate;
	cout << "4�� �� �ݾ�: " << rase << endl;
	rase = (money + rase) * rate;
	cout << "5�� �� �ݾ�: " << rase << endl;
	rase = (money + rase) * rate;
	cout << "6�� �� �ݾ�: " << rase << endl;

	return 0;
}