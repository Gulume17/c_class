#include <stdio.h>

int main(void)
{

	/*
	for() {
	   for (){
	       }
	    }
	*/

	int first_for, second_for;
	for (first_for = 1; first_for <= 3; first_for ++) {// �ٱ� �ݺ���
		// 1~3���� ���� (��)
		for (second_for = 1; second_for <= 2; second_for++) {//��ø �ݺ���
			printf("%d �� %d �� \n", first_for, second_for);
	}
		printf("\n");
	}
	// �ݺ��� i(�ٱ� �ݺ���) , j(��ø �ݺ���)�� ���� ������ (������)

	return 0;
}

// day9 ����
/*
1. do while�� (�ּ� 1�� ����)
2. for�� (�ʱ�ȭ; ���ǽ�; ������)
3. ���ѷ��� 
4. break�� 
5. continue��
6. ��ø for�� 
*/
