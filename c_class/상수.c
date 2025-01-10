#include <stdio.h>
#define MYAGE = 10 // 컴파일 시에 가장 먼저 처리함 , 세미콜론 X

int main(void)
{
	//변수: 변할 수 있는 값
	int num = 2;
	num = 3;
	
	//상수: 변하지 않는 값 
	// 리터럴 상수: 정수 (int) L ,실수 (double) f -> 그 자체로 고정된 상수 
	// 심볼릭 상수:  const  -> 선언 이후에는 변경이 불가능 함 
	// 메크로 상수: 심볼릭 상수의 일종으로 
	
	//const int num3 = 3;
	const int NUM3 = 3; //심볼릭 상수는 대문자로 주로 씀
	//const int num3;
	//num3 = 3;


	

	return 0;
}