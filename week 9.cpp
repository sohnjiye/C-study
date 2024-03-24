#include <iostream>
using namespace std;

int main()
{
	int month = 0;
	char answer;

	cout << "Is your birthday month in Set1?" << endl;
	cout << " 1  3  5  7  9  11\n" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
		month += 1;

	cout << "Is your birthday month in Set2?" << endl;
	cout << " 2   3   6   7  10  11\n" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
		month += 2;

	cout << "Is your birthday month in Set3?" << endl;
	cout << " 4   5   6   7  12\n" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
		month += 4;

	cout << "Is your birthday month in Set4?" << endl;
	cout << " 8   9  10  11  12\n" << endl;
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
		month += 8;

	cout << "Your birthday month is " << month << endl;

	return 0;
}