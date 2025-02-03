#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// malloc (num)
	// free : 제거 함수

	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	if (num < 2)
	{
		printf("숫자는 최소 2이상 입력해야 합니다.");
		return 1;
	}

	int * numLength = (int *)malloc(num * sizeof(int)); 

	if (numLength == NULL)
	{
		printf("메모리 할당 실패 \n");
		return 1; // 1은 프로그램 오류를 알려주는 의미가 있다.
	}
	numLength[1] = 3;
	printf("%d \n", numLength[1]);
	free(numLength);

	//int numLength[num]; -> 이걸 하기 위해서 malloc 함수를 쓴다.


	return 0; // 0은 프로그램 종료의 의미가 있다.
}