#include <stdio.h>

int main(void)
{

	/*
	for(초기값; 조건식; 증감식;){
	조건이 참이라면 실행시킬 코드;
	}
	*/

	int i;
	for (i = 1; i <= 10; i++) {
		printf("for문 반복 %d 번째 \n", i);
	}

	int i_2;
	for (i_2 = 10; i_2 >= 1; i_2--) {
		printf("for문 반복 %d 번째 \n", i_2);
	}

	int a; 
	for (a = 1; a <= 10; a++) {
		printf("%d의 제곱 : %d \n", a, a*a);
	}

	return 0;
}