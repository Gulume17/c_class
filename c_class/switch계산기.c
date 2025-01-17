#include <stdio.h>

int main(void)
{
	// +,-,*,/
	// 변수 : 문자형 1개 / 정수형 2개
	// 나눗셈 특수처리 필요 (0으로 나눌 수 없기 때문에)
	/*
	int num_a,  num_b ;
	char char_a;
	printf("계산할 값을 입력해 주세요. ");
	printf("%d + %d = %d \n " , num_a , num_b);
	printf("%d - %d = %d \n", num_a, num_b);
	printf("%d * %d = %d \n" , num_a , num_b);
	printf("%d / %d = %d \n", num_a, num_b);
	scanf_s("%d", &num_a);
	printf("+");
	scanf_s("%d", &num_b);
	printf("");
	scanf_s("%c", &char_a);
	
	switch (num_a) {
	case 1: printf(" \n");
		break;
	case 2: printf(" \n");
		break;
	case 3: printf(" \n");
		break;
	default: printf(" \n");
		break;
	}

		switch (num_b) {
		case 1: printf(" \n");
			break;
		case 2: printf(" \n");
			break;
		case 3: printf(" \n");
			break;
		default: printf(" \n");
			break;
		}
	
		switch (char_a) {
		case 1: printf(" \n");
		 break;
		default: printf(" \n");
			break;
	}
		*/


		char operator;
		int num1, num2;

		printf("연산자를 입력하세요(+,-,*,/) : ");
		scnaf_s("%c", &operator,1); // char형은 ,1을 써줘야 에러가 안난다. (규칙) 1개 받으라는 뜻
		printf("두 숫자를 입력하세요 : ");
		scamf_s("%d %d", num1, num2);

		switch (operator) 
		{
		case '+': printf("%d + %d = %d \n", num1, num2, num1 + num2);
			break;
		case '-': printf("%d - %d =%d \n", num1, num2, num1 - num2);
			break;
		case '*': printf("%d * %d = %d \n", num1, num2, num1 * num2);
			break;
		case '/' :
			if (num2 != 0) {
				printf("%d /%d =%d \n", num1, num2, num1 / num2);
			}
			else {
				printf("0으로 나눌수 없습니다. \n");
			}
			break;

		default: printf("유효하지 않은 연산자 입니다.");
			break;
		}
		




	return 0;
}