#include <stdio.h>

int main(void)
{
	char ch1 = 'A';
	printf("%c\n" , ch1);

	char ch2 = 65; // �ƽ�Ű�ڵ� A~Z : 65~90 / a~z: 97~122
	printf("%c\n", ch2);

	printf("����: %c ����: %d\n", ch1, ch2);
	printf("���� :%c ����: %d \n", ch1, ch2);

	int num3 = 'c';
	printf("����:%c  ����: %d \n", num3, num3);


	return 0;
}