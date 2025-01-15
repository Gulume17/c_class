#include <stdio.h>

int main(void)
{
	// 국아: 86점 / 영어: 75점 / 수학: 88점 / 사회: 60점 / 과학: 96점 
	// 평균은 실수로 출력

	int total = 86 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;
	printf(" 짱구의 평균은 : %0.1f점 입니다. \n" ,avg);

	//국어: 64 점 / 영어: 56 점 / 수학: 87.5 점 / 사회: 76.8 점/ 과학: 96.9 점
	float total2 = 64 + 56 + 87.5 + 76.8 + 96.9;
	float avg2 = total2 / 5.0f;
	printf("철수의 평균은 : %0.2f점 입니다. \n", avg2);



	
	return 0;
}