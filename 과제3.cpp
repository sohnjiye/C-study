#include<iostream>
using namespace std;

int main() {
	int a = 10; // 변수 a의 값을 10으로 지정
	int* ptr = &a; // 포인터 선언 후 a의 주소 추출
	cout << "변수 a의 주소는 : " << &a << endl;
	cout << "a의 값 : " << *ptr << endl; //ptr에 a의 주소 저장되어있으므로 *로 a의 변수 값 반환

	return 0;
}