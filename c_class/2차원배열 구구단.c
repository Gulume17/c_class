#include <stdio.h>

int main (void)
{
	// 2차원 배열을 선언한 후 구구단을 출력해보세요.
	
	int gugudan[8][9];
	int i, j;
	for (i = 0; i < 8; i++) { // 행이 8인 이유는 2단부터 9단까지  출력하고 싶기 때문에
		printf("%d단 \n", i + 2);
		for (j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 2) * (j + 1);
			printf("%d * %d = %d \n", i + 2, j + 1,gugudan[i][j]);
		}
		printf("\n");
	}
	
	
	



	return 0;
}