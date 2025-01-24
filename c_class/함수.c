#include <stdio.h>

// void 예제
void sayHello()
{
	printf("Hello World \n");
}

// retrun 예제
int add(int a, int b)
{
	return a + b;
}

//매개변수 예제
void name(char* name) 
{
	printf("Hello, %s \n", name);
}

int main(void)
{
	/*
	반환형 함수이름(매개변수)
	{
		return 리턴할 값;
	}
	반환형 : 함수의 결과를 나타낼 때 사용할 자료형
	함수 이름 : 호출할 때 사용할 이름 (개발자 마음대로)
	매개변수 : 함수가 작업을 수행하기 위해 필요한 입력값 (없을수도 있음)
	return : 함수가 작업을 끝낸 뒤 호출한 곳으로 돌려주는 명령어 (void 일 땐 생략가능) / void : 자료형이 없거나 반환할 값이 없다 라는 뜻 (전달,결과값 X)
	*/

	 // void 예제
	sayHello(); 

	printf("\n");

	// return 에제
	int result = add(5,3); // add (a값,b값);
	printf("result : %d \n", result);

	printf("\n");

	// 매개변수 에제
	name("준석"); // name("내용");




	return 0;
}