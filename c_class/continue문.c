#include <stdio.h>
 
int main(void)
{
/*
for(�ʱ�; ����; ����){
continue;
������ �ڵ�
}

while (����){
������;
continue;
������ �ڵ�;
}
*/

	int for_continue;
	for (for_continue = 0; for_continue <= 10; for_continue++) {
		if (for_continue % 2 == 0) {//¦����� 
			continue; // if���� ���ǿ� �����Ǹ� ������ ���� ���� �����ϰ� �� ���� ������ ���´�. / ex) : ¦���� �����Ǹ� ¦������ �ȳ����� Ȧ������ �������� �ʾ����Ƿ� Ȧ���鸸 ���´�.
		}
		printf("%d \n", for_continue);
	} 

	printf("\n");

	int while_continue = 1;
	while (while_continue <= 10) {
		while_continue++;
		if (while_continue % 2 != 0) {// Ȧ�����
			continue;
		}
		printf(" %d \n", while_continue);
	}
	
	
	return 0;
}