#include <stdio.h>

int main(void)
{
	int a = 10, b; // a= 10, b =?
	int* c = &b; // c��� �����ͺ����� b�� �ּҸ� ����Ű�� ���� ��

	b = a--; // a-- : 10
	b += 20; // b = b+20 (30)
	printf("%d", *c); // b�� �ּ��� ������ : 30


	//����ó����� ���蹮��
	int n = 4; // 
	int* pt = NULL;
	pt = &n;
	printf("%d", &n + *pt - *&pt + n);
	// n�� �ּҰ� 100������� ġ�� 100 + 4 - 100 + 4 = 8


	return 0;
}