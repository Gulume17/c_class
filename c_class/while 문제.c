#include <stdio.h>

int main(void)
{
	// while문을 사용해서 사용자가 0을 입력할 때까지 프로그램은 끝나지 않음
	// 사용자가 어떤 숫자를 입력했다면 (입력한 숫자는 *입니다. (0 입력시 종료))

	int num;
	printf("숫자를 입력하세요 \n");
	scanf_s("%d", &num);
	while (num != 0) { // 0이 아니라면 계속 반복함
		printf("입력한 숫자는 %d입니다. 다시 입력하세요 (0을입력시 종료) : " , num);
		scanf_s("%d",&num);
	}

	printf("0 입력으로 프로그램을 종료합니다.");
	
	return 0;
}