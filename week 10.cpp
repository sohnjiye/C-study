#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double r;
	double s, s1;
	double area;
	const double PI = 3.14159;


	cout << "Enter the length from the center to a vertex: ";
	cin >> r;

	s1 = r * sin(PI / 5);
	s = 2 * s1;
	area = (5 * pow(s, 2)) / (4 * tan(PI / 5));

	cout << fixed << setprecision(2) << "The area of the pentagon is " << area << endl;

	return 0;
}