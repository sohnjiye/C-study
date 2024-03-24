#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	int correctCount = 0;
	int count = 0;
	long startTime = time(0);
	//const int NUMBER_OF_QUESTIONS = 5;
	char continueLoop = 'Y';

	srand(time(0));

	while (continueLoop == 'Y')
	{
		int number1 = rand() % 10;
		int number2 = rand() % 10;

		if (number1 < number2)
		{
			int temp = number1;
			number1 = number2;
			number2 = temp;
		}

		cout << "What is " << number1 << " - " << number2 << "? ";
		int answer;
		cin >> answer;

		if (number1 - number2 == answer)
		{
			cout << "You are correct!\n";
			correctCount++;
		}
		else
			cout << "Your answer is wrong.\n" << number1 << " - " << number2 << " should be " <<
			(number1 - number2) << endl;

		count++;

		cout << "Enter Y to continue and N to quit: ";
		cin >> continueLoop;
	}

	long endTime = time(0);
	long testTime = endTime - startTime;

	cout << "Correct count is " << correctCount << "\nTest time is " << testTime << " seconds\n";

	//5.3

	int i;
	double j;


	cout << "Kilograms         Pounds" << endl;
	for (int i = 1; i <= 9; i += 2)
	{
		j = i * 2.2;
		cout << i;
		if (j >= 10)
		{
			cout << setprecision(1) << fixed << setw(21) << showpoint << j << endl;
		}
		else
		{
			cout << setprecision(1) << fixed << setw(20) << showpoint << j << endl;
		}

	}
	for (int i = 10; i <= 99; i += 2)
	{
		j = i * 2.2;
		cout << i;
		
		if (j >= 100)
		{
			cout << setprecision(1) << fixed << setw(21) << showpoint << j << endl;
		}
		else
		{
			cout << setprecision(1) << fixed << setw(20) << showpoint << j << endl;
		}

	}
	for (int i = 100; i <= 199; i += 2)
	{
		j = i * 2.2;
		cout << i;
		cout << setprecision(1) << fixed << setw(20) << showpoint << j << endl;

	}

	return 0;
}