#include <stdio.h>

int main(void)
{
	// 2차원배열 (행렬)

	int a[3][4];
	a[0][0] = 10;
	printf("%d \n", a[0][0]);

	printf("\n");

	int arr[3][4] = {
		{1,2,3,4}, // 0행
		{5,6,7,8}, // 1행
		{9,10,11,12} // 2행
	};

	for (int i = 0; i < 3; i++) { // 행을 도는 for문
		for (int j = 0; j < 4; j++) { // 열을 도는 for문
			printf("%d", arr[i][j]);
	}
	printf("\n");
}
	printf("\n");

	for (int i = 0; i < 3; i++) { // 행을 도는 for문
		for (int j = 0; j < 4; j++) { // 열을 도는 for문
			arr[1][j] = 10;
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	
	

	return 0;
}