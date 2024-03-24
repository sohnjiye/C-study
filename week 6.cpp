#include <iostream>
using namespace std;

int main()
{
	// 금액을 입력
	cout << "Enter an amount in double, for example 11.56: ";
	double amount;
	cin >> amount;

	int remainingAmount = static_cast<int>(amount * 100);

	// 1달러의 수를 계산
	int numberOfOneDollars = remainingAmount / 100;
	remainingAmount = remainingAmount % 100;

	// 남은 금액에서 쿼터 계산
	int numberOfQuarters = remainingAmount / 25;
	remainingAmount = remainingAmount % 25;

	// 남은 금액에서 다임 계산
	int numberOfDimes = remainingAmount / 10;
	remainingAmount = remainingAmount % 10;

	// 남은 금액에서 니켈 계산
	int numberOfNickels = remainingAmount / 5;
	remainingAmount = remainingAmount % 5;

	// 남은 금액에서 페니 계산
	int numberOfPennies = remainingAmount;
	
	// 결과 화면 표시
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



	// 실습 2.13

	int money;
	double rate;
	double rase = 0;
	rate = (1 + (0.05 / 12));

	cout << "월 저축금액을 입력하세요: ";
	cin >> money;

	rase = (money + rase) * rate;
	cout << "1달 후 금액: " << rase << endl;
	rase = (money + rase) * rate;
	cout << "2달 후 금액: " << rase << endl;
	rase = (money + rase) * rate;
	cout << "3달 후 금액: " << rase << endl;
	rase = (money + rase) * rate;
	cout << "4달 후 금액: " << rase << endl;
	rase = (money + rase) * rate;
	cout << "5달 후 금액: " << rase << endl;
	rase = (money + rase) * rate;
	cout << "6달 후 금액: " << rase << endl;

	return 0;
}