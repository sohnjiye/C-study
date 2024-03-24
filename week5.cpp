#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//list 2.9

	//1970년 1월 1일 자정 이후의 초 값 계산
	int totalSeconds = time(0);

	//현재 시간의 초 값 계산
	int currentSeconds = totalSeconds % 60;

	//전체 분 값 계산
	int totalMinutes = totalSeconds / 60;

	//현재 분 값 계산
	int currentMinute = totalMinutes % 60;

	//전체 시간 값 계산
	int totalHours = totalMinutes / 60;

	//현재 시간 계산
	int currentHour = (totalHours + 9) % 24;

	//결과 화면 출력
	cout << "Current time is" << currentHour << ":" << currentMinute << ":" << currentSeconds << "KST" << endl;

	//문제 1

	int a, b, c = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	cout << a << "," << b << "," << c << " => " << "십진수: " << 100 * a + 10 * b + c << endl;

	//문제 2 (실습문제 2.6)

	int q, w, e, x, z;


	cin >> z;

	q = z / 100;
	w = z % 100 / 10;
	e = z % 10;

	x = q + w + e;
	cout << z << "=>" << q << "+" << w << "+" << e << "=" << x << endl;

	//문제 3

	int h, i, j, k, l, m;

	cin >> m;

	h = m % 2;
	i = m / 2 % 2;
	j = m / 2 / 2 % 2;
	k = m / 2 / 2 / 2 % 2;
	l = m / 2 / 2 / 2 / 2 % 2;

	cout << m << "(10진수) => " << l << k << j << i << h << "(2진수)" << endl;

	return 0;
}
