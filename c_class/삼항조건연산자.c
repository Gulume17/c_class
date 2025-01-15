#include <stdio.h>

int main(void)
{
// 조건식 ? 맞으면 이제 출력됨 (true) : 틀리면 이게 출력됨 (false)
	int ten =  10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty; // (true : false)
	printf("더 큰 값은 : %d \n", twenty);

	//조건 1 : 사용자에게 숫자를 입력받아서 그 숫자가 짝수라면 0을 출력하고 홀수라면 1을 출력
	// 출력 메시지 : 당신이 입력한 숫자는 * 이며 결과 : *

	int inputNumber;
	int result2;
	printf("좋아하는 숫자를 입력해보세요");
	scanf_s("%d", &inputNumber);
	result2 = inputNumber % 2 == 0 ? 0 : 1; // % 2 == 0 부분은 많이 쓰임
	printf("당신이 좋아하는 숫자는 %d이며, 결과 : %d \n", inputNumber, result2);

	
		


	return 0;
}