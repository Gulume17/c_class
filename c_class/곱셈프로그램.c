#include <stdio.h>

/*
���� 2������ ������ ���� �ϴ� �Լ� ����
���� 2������ ����ڰ� �Է�
���ϱ� ���� ��� : 0X0 = 00 ���
*/

int math(int a, int b)
{
	return a * b;
}

int main(void)
{
	int i, j;
	
	printf("���ڸ� �Է��ϼ��� :  ");
	scanf_s("%d %d", &i, &j);
	int result = math(i, j);
	printf("���ϱ� ���� ���  : %d * %d = %d \n", i,j,result);

	/*
	�� ���� �� �� ū ���� ��ȯ�ϴ� �Լ�
	���� ������ �Է��ϰ� �� ������ �з¹޾Ƽ�
	�� ��� ������ ������ ���
	*/
	


	return 0;
}