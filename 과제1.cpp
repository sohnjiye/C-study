#include <iostream> //컴파일러는 전처리기 호출, 키보드 입력 및 화면 출력시에 필요
#include <string> //문자열의 크기 제약이 없다
using namespace std; //std:: 생략을 위해 선언

int main() //C++ 프로그램의 시작점
{
	cout << "당신의 이름은 무엇입니까?";
	char name[11]; //영문10, 한글5
	cin.getline(name, 11, '\n'); //Enter입력까지 최대 10개 문자 입력 가능
	cout << "반갑습니다." << name << "님" << endl;

	int appleprice{}, bananaprice{}, orangeprice{}; //정수(integer)의 타입으로 입력받음
	int apple{}, banana{}, orange{}; //과일의 개수를 입력받음
	int total{};
	//총가격 - 500(할인)된 가격을 출력함
	
	cout << "apple의 가격은 얼마입니까?";
	cin >> appleprice; //사과가격을 입력받음
	cout << "banana의 가격은 얼마입니까?";
	cin >> bananaprice;
	cout << "orange의 가격은 얼마입니까?";
	cin >> orangeprice;
	
	cout << "apple은 몇개 있습니까?";  //사과의 개수를 입력받음
	cin >> apple;
	cout << "banana은 몇개 있습니까?";
	cin >> banana;
	cout << "orange은 몇개 있습니까?";
	cin >> orange;

	cout << "총" << (appleprice * apple) + (bananaprice * banana) + (orangeprice * orange) - 500 << "원 입니다." << endl;
	
	return 0;
}