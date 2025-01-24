#include <stdio.h>

int main(void)
{
	/*
	int a[3] = (1, 2, 3);
	int* ptr = a; // a[0] ������ �ּҸ� �����ϰ� ����
	*/

	// �迭������
	int arr[3] = { 1,2,3 };
	int (*arrptr)[3] = &arr; // arr�迭 ��ü�� �ּҸ� ����Ŵ
	
	printf("ù��° ��Ҵ� : %d \n", (*arrptr)[0]);
	printf("�ι�° ��Ҵ� : %d \n", (*arrptr)[1]);
	printf("����° ��Ҵ� : %d \n", (*arrptr)[2]);
	

	for (int i = 0; i < 3; i++) {
		printf("arr[%d] : %d \n", i, (*arrptr)[i]);
	}

	// 2���� �迭������

	int arr2[2][3] = {
		{1,2,3},
	    {4,5,6}
	};

	int(*arr2ptr)[3] = arr2;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; i < 3; i++) {
			printf("arr2[%d][%d] : %d \n", i, j, arr2ptr[i][j]); // 2���� �迭�����ʹ� �߰� �������� �ʿ����. (���� �̹� ����Ű�� �ִ�.)
		}
}

	return 0;
}

/*
	day 12����
	1. ������ �迭 : �����͸� �迭�� �����ϴ� ���
	2. 2���� �迭
	3. �迭 ������ (1����)
	*/