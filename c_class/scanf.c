#include <stdio.h>

int main(void)
{
// 1. �Է��� �����Ϳ� �����ϴ� �ڷ��� (���Ĺ���) 
// 2. �Է��� �����Ͱ� ����� �޸� ���� (����)
// scanf -> scanf_s // scanf_s ����� �� ������

	/*int num;
	scanf_s("%d", &num);
	scanf_s("%d\n", &num); // X �Է� �Լ�
	printf() : ����Լ�
	scan_f("%d", &num); // �Է��� ���� ���� 
	printf("\n"); // �ٹٲ��� �Է�*/

	/*scan_f("�Է� : %d", &num); // X
	printf("�Է� : ");
	scanf_s("%d", &num);  */

	/*int x, y, z, total;
	printf("���� 3�� �Է� : ");
	scanf_s("%d %d %d", &x, &y, &z);
	total = x + y + z;
	printf("%d + %d + %d = % d", x, y, z, total);*/

	float fnum;
	printf("�Ǽ� �Է� : "); 
	scanf_s("%f", &fnum);
	printf("�Էµ� �� : %0.2f", fnum); // 0: ĭ ���� // 2: �Ҽ��� �ڸ���

	float scanf_pi;
	printf("������ �Է� : ");
	scanf_s("%f", &scanf_pi);
	printf("�Էµ� �� : %0.2f", scanf_pi);
	
	return 0;
}