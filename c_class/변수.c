#include<stdio.h>

int main(void)
{
	// 한줄 주석
	/* 
	* 여
	* 러
	* 줄
	* 주
	* 석
	*/


	//int num = 3
	// 첫번째 방법
	// 자료형 변수명 = 값; 
	// 두번째 방법
	// 자료형 변수명2; // 선언
	//변수명2 = 값; // 초기화
	//변수명3 = 값; // 안됨!

	int num2; // 선언
	num2 = 2; // 초기화
	num2 = 5; // 초기화 (덮어쓸 수 있음)

	int number1, number2; //선언
	number1 = 10; //number1 초기화
	number2 = 20; // number2 초기화

	int number3 = 30, number4 = 40; 

	// 변수명 규칙
	int num = 50;
	int number16 = 16;// 숫자조합 가능
	int number_20 = 20; // 언더바 가능
	int Number = 165; // 대문자 가능

	// 불가능한 변수명
	int Hello World = 1; // 공백 불가
	int hell#$ = 2; // 특수문자 불가
	int 12number = 12;//숫자 먼저 사용 불가
	int = 1; // 예약어 불가

	// 1. number_five
	// 2. numberfive


	return 0; 
}

