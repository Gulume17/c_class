#include <stdio.h>

int main(void)
{

	/*
	for(�ʱⰪ; ���ǽ�; ������;){
	������ ���̶�� �����ų �ڵ�;
	}
	*/

	int i;
	for (i = 1; i <= 10; i++) {
		printf("for�� �ݺ� %d ��° \n", i);
	}

	int i_2;
	for (i_2 = 10; i_2 >= 1; i_2--) {
		printf("for�� �ݺ� %d ��° \n", i_2);
	}

	int a; 
	for (a = 1; a <= 10; a++) {
		printf("%d�� ���� : %d \n", a, a*a);
	}

	return 0;
}