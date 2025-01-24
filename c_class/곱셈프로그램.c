#include <stdio.h>

/*
슷자 2가지를 가지고 곱셈 하는 함수 생성
숫자 2가지는 사용자가 입력
곱하기 연산 결과 : 0X0 = 00 출력
*/

int math(int a, int b)
{
	return a * b;
}

int main(void)
{
	int i, j;
	
	printf("숫자를 입력하세요 :  ");
	scanf_s("%d %d", &i, &j);
	int result = math(i, j);
	printf("곱하기 연산 결과  : %d * %d = %d \n", i,j,result);

	/*
	두 가격 중 더 큰 값을 반환하는 함수
	딸기 가격을 입력하고 귤 가격을 압력받아서
	더 비싼 과일의 가격을 출력
	*/
	


	return 0;
}