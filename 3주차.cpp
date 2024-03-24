/*이름공간: 여러 개발자가 프로젝트 참여시 이름 충돌 발생. 고유의 이름공간 생성 기능 제공

namespace gui
{
	//변수, 함수, 클래스, 객체 선언
	int length = 80;
}
namespace cmd
{
	//변수, 함수, 클래스, 객체 선언
	int length = 70;
}
cout<<gui::length;
cout<<cmd::length;
*/


/*#include <iostream>
using namespace std;

int main()
{
	/*list 1.2
	cout << "Programming is fun!" << endl;
	//cout << "Programming is fun!" << '\n';
	cout << "Fundamentals First" << endl;
	//cout << "Fundamentals First" << '\n';
	cout << "Problem Driven" << endl;
	//cout << "Problem Driven" << '\n'; */

	/*list 1.3
	cout << "(10.5 + 2 * 3) / (45 - 3.5) = ";
	cout << (10.5 + 2 * 3) / (45 - 3.5) << endl; 



	return 0;
}*/

/* -디버그 -> 디버깅하지 않고 시작
- 화면이 사라질 경우
    -> system("pause"); 문장을 return 앞에 삽입
	   또는 메뉴의 프로젝트 -> 프로젝트 속성 -> 링커 -> 시스템 -> 서브시스템의 값으로 콘솔(/SUBSYSTEM:CONSOLE) 선택
	   또는 프로젝트 생성시 "Empty project" 대신에 "Windows Console Application" 유형으로 생성*/

#include <iostream>
using namespace std;

int main()
{
	/* 30pg 1-3
	cout << "  CCCC       +         +" << endl;
	cout << " C           +         +" << endl;
	cout << "C         +++++++   +++++++" << endl;
	cout << " C           +         +" << endl;
	cout << "  CCCC       +         +" << endl;*/

	/* 3주차 과제*/
	cout << "     ㅅ        ㅈㅈㅈㅈㅈ     ㅇㅇ" << endl;
	cout << "    ㅅㅅ         ㅈㅈ        ㅇ  ㅇ" << endl;
	cout << "   ㅅ  ㅅ        ㅈ ㅈ      ㅇ    ㅇ" << endl;
	cout << "  ㅅ    ㅅ      ㅈ   ㅈ      ㅇ  ㅇ" << endl;
	cout << " ㅅ      ㅅ    ㅈ     ㅈ      ㅇㅇ " << endl;

	/*// list 2.1

	double radius;
	double area;

	// 1단계: 반지름 읽기
	radius = 20;

	// 2단계: 면적 계산
	area = radius * radius * 3.14159;

	// 3단계: 면적 출력
	cout << "The area is " << area << endl;*/

	
	return 0;
}