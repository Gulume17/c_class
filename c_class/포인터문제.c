#include <stdio.h>

int main(void)
{
	//  ������ �����ͺ����� ���� 
	// ������ ����ִ� �� : ������ �ּҰ� (4 : 1004)

	int a = 4;
	int* ptr;
	ptr= &a;
	// int* ptr = &a; 
	printf("%d : %p", *ptr,ptr);

	return 0;
}