#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// printf("");
	// rand() , srand(), time() 
	// rand�δ� ������ 41�� �����Ǿ� �ְ� srand�ȿ� time�Լ��� ��� ������ ���´�.

	int rad;
	srand((unsigned)time(NULL)); // NULL�� 0�� (��ĭ) �ǹ��� // unsigned �Լ��� ��������θ� ����ϱ� ���ؼ� 
	rad = rand() % 100 + 1; // RAND_MAX : 0 ~ 32767 // rand(); : ���� ���� �Լ� // % 100 + 1 : 1~100 ���̿����� ���� �߻�
	printf("%d", rad);
	return 0;

}