#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//list 2.9

	//1970�� 1�� 1�� ���� ������ �� �� ���
	int totalSeconds = time(0);

	//���� �ð��� �� �� ���
	int currentSeconds = totalSeconds % 60;

	//��ü �� �� ���
	int totalMinutes = totalSeconds / 60;

	//���� �� �� ���
	int currentMinute = totalMinutes % 60;

	//��ü �ð� �� ���
	int totalHours = totalMinutes / 60;

	//���� �ð� ���
	int currentHour = (totalHours + 9) % 24;

	//��� ȭ�� ���
	cout << "Current time is" << currentHour << ":" << currentMinute << ":" << currentSeconds << "KST" << endl;

	//���� 1

	int a, b, c = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	cout << a << "," << b << "," << c << " => " << "������: " << 100 * a + 10 * b + c << endl;

	//���� 2 (�ǽ����� 2.6)

	int q, w, e, x, z;


	cin >> z;

	q = z / 100;
	w = z % 100 / 10;
	e = z % 10;

	x = q + w + e;
	cout << z << "=>" << q << "+" << w << "+" << e << "=" << x << endl;

	//���� 3

	int h, i, j, k, l, m;

	cin >> m;

	h = m % 2;
	i = m / 2 % 2;
	j = m / 2 / 2 % 2;
	k = m / 2 / 2 / 2 % 2;
	l = m / 2 / 2 / 2 / 2 % 2;

	cout << m << "(10����) => " << l << k << j << i << h << "(2����)" << endl;

	return 0;
}
