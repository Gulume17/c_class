#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// malloc (num)
	// free : ���� �Լ�

	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num < 2)
	{
		printf("���ڴ� �ּ� 2�̻� �Է��ؾ� �մϴ�.");
		return 1;
	}

	int * numLength = (int *)malloc(num * sizeof(int)); 

	if (numLength == NULL)
	{
		printf("�޸� �Ҵ� ���� \n");
		return 1; // 1�� ���α׷� ������ �˷��ִ� �ǹ̰� �ִ�.
	}
	numLength[1] = 3;
	printf("%d \n", numLength[1]);
	free(numLength);

	//int numLength[num]; -> �̰� �ϱ� ���ؼ� malloc �Լ��� ����.


	return 0; // 0�� ���α׷� ������ �ǹ̰� �ִ�.
}