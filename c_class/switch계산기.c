#include <stdio.h>

int main(void)
{
	// +,-,*,/
	// ���� : ������ 1�� / ������ 2��
	// ������ Ư��ó�� �ʿ� (0���� ���� �� ���� ������)
	/*
	int num_a,  num_b ;
	char char_a;
	printf("����� ���� �Է��� �ּ���. ");
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

		printf("�����ڸ� �Է��ϼ���(+,-,*,/) : ");
		scnaf_s("%c", &operator,1); // char���� ,1�� ����� ������ �ȳ���. (��Ģ) 1�� ������� ��
		printf("�� ���ڸ� �Է��ϼ��� : ");
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
				printf("0���� ������ �����ϴ�. \n");
			}
			break;

		default: printf("��ȿ���� ���� ������ �Դϴ�.");
			break;
		}
		




	return 0;
}