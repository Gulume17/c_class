#include <stdio.h>

int main(void)
{
	

	// 자동 형변환
	double change_number = 10;
	printf("%f\n" , change_number);

	int change_number2 = 5.11223;
	printf("%d\n" , change_number2);

	printf("%d\n", (int)1.1234);
	printf("%d\n", (short)1.1234);
	printf("%f\n" , (double)22);
	printf("%f\n", (float)22);

	float f = 3.14f; // 3.14 뒤에 f를 써주면 오류가 덜 뜸
	printf("%f\n", f);

	// p. 51 참고 (정수 관련)
	// 0+0 = 0
	// 0+1 = 1
	// 1+0 = 1

	/*1+1 = 10 
	(2/2 = 1 0 )
	(1/2 = 0 1) 임으로 10이 나온다. (2를 2로 나눈 몫과 나머지인데 나머지 부분만 뒤에서부터 읽으면 10이 된다./ 모든 숫자는 2로 나누어 계산한다.)*/

	// p. 52 참고 (실수 관련)
	/* 부동소수점 */



	return 0;
}

