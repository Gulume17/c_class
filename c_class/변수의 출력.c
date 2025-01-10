#include <stdio.h>

int main(void)
{
	int number1 = 1; //number1 이라는 것을 통해 1에 접근이 가능하다.
	int number2 = 2;
	printf("%d\n" , number1); // %d = 십진수 정수 = 0~9 (서식 지정자)
	printf("나이: %d \n번호: %d\n", number2,number2); 

	//2*3=6
	//조건 : 변수를 3개 선언
	//곱하기는 *를 사용한다.

	int number3 = 2;
	int number4 = 3;
	int result = number3 * number4;
	printf( " % d * %d = %d " , number3,number4,result);



	return 0;

}