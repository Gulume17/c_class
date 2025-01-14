#include <stdio.h>

int main(void)
{
/*
a > b (a가 b보다 크다)
a < b (a가 b보다 작다)
a >= b (a가 b보다 크거나 같다)
a <= b (a가 b보다 작거나 같다)
a == b (a와 b는 같다)
a !=b (a와 b는 다르다)
*/
	// true 에는 1을 반환 false에는 0을 반환 (참 거짓) -> 참이면 1을 반환 거짓이면 0을 반환한다 (반환 -> 출력)

	int a = 1, b = 10;
	printf("a > b : %d \n", a > b);
	printf(" a< b : %d \n", a < b);
	printf("a >=b : %d \n", a >= b);
	printf("a <=b : %d \n", a <= b);
	printf("a == b : %d \n", a == b);
	printf("a !=b : %d \n", a != b);


	return 0;
}