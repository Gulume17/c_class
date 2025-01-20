#include <stdio.h>
 
int main(void)
{
/*
for(초기; 조건; 증감){
continue;
실행할 코드
}

while (조건){
증감식;
continue;
실행할 코드;
}
*/

	int for_continue;
	for (for_continue = 0; for_continue <= 10; for_continue++) {
		if (for_continue % 2 == 0) {//짝수라면 
			continue; // if문의 조건에 충족되면 충족된 것의 값은 무시하고 그 외의 값들이 나온다. / ex) : 짝수에 충족되면 짝수들은 안나오고 홀수들은 충족되지 않았으므로 홀수들만 나온다.
		}
		printf("%d \n", for_continue);
	} 

	printf("\n");

	int while_continue = 1;
	while (while_continue <= 10) {
		while_continue++;
		if (while_continue % 2 != 0) {// 홀수라면
			continue;
		}
		printf(" %d \n", while_continue);
	}
	
	
	return 0;
}