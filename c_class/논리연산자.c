#include <stdio.h>

int main(void)
{
/*
시프트 누르고 원화누르면 || 나옴
|| (or) : 피연산자 중 하나만 true 이면 true 라는 결과값을 반환 
&& (and) : 피연산자중 하나만 false이면 false를 반환 (둘다 true 여야 한다.)
! (not) : 논리부정연산자로 피연산자가 true이면 false라는 반대값을 반환한다. (단항연산자)
피연산자란? 연산 대상 테이터
*/

	int one = 10, two = 20, three = 30, four = 40;
	int result;
	result = one > two || two > three || three > four;
	// 10 > 20? false
	// 20 >= 30 ? false 
	// 30 > 40? false
	printf("result : %d \n", result); // 0: false 1: true

	result = one <= two && two <= three && three <= four;
	printf("result : %d \n", result); // 0: false 1: true

	result = !(one > two);
	printf("result : %d \n", result); // 0: false 1: true

	return 0;
}