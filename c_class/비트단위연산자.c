#include <stdio.h>

int main(void)
{
	/*
	& (and) : 대응하는 각 비트이 값이 모두 1이면 1을 반환 아니면 0을 반환
	| (or) : 대응하는 비트의 값 증에 1이 하나라도 있으면 1을 반환
	^ (xor) : 대응하는 비트의 값이 다르면 1을 반환
	~ (not) : 비트의 값이 1이면 0으로, 0이라면 1로 비트 값을 반전시킴
	*/

	int bit_five = 5; //    00000101 - 11111010 (비트 반전) - 00000101 (2의 보수를 더해서 1+4=5 +1(2의 보수) =-6 (비트를 반전시켜서 음수가 됨))
	int bit_three = 3; // 00000011 - 11111100 (비트 반전)  - 00000011 
	printf("bit_five & bit_three = %d \n", bit_five & bit_three);
	printf("bit_fivr | bit_three = %d \n", bit_five | bit_three);
	printf("bit_fivr ^ bit_three = %d \n", bit_five ^ bit_three);
	printf("~%d = %d \n", bit_five, ~bit_five);

	return 0;
}

// day 6정리
/*
1. 논리연산자 (or / and / not)
2.삼항조건연산자 (짝수를 구하는 공식 : 값 % 2 == 0)
3. 비트단위연산자 : not을 ! 아니고 ~ 표현 / ^ (xor)
*/