#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159;

	// 1단계: 반지름 읽기
	double radius;
	cout << "반지름을 입력하세요: ";
	cin >> radius;

	//2단계: 면적, 둘레 계산
	double circlearea = radius * radius * PI;
	double circlecircum = 2 * PI * radius;
	double outsquare = 4 * radius * radius;
	double insquare = 2 * radius * radius;

	//3단게: 면적, 둘레 출력
	cout << "원의 면적: " << circlearea << endl;
	cout << "원의 둘레: " << circlecircum << endl;
	cout << "외접하는 정사각형의 면적: " << outsquare << endl;
	cout << "내접하는 정사각형의 면적: " << insquare << endl;

	return 0;
}