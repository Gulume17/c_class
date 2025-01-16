#include <stdio.h>

int main(void)
{
	// 시용자가 20살 이상이면 1280원, 미만이라면 800원을 받는 프로그램 구현하기
	int userAge;
	printf("나이를 입력해주세요 : ");
	scanf_s("%d", &userAge);
	int ageCheck = userAge >= 20 ? 1280 : 800;
	printf("%d 세의 지하철 요금은 %d 입니다.", userAge, ageCheck);
	






	return 0;
}