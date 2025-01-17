#include <stdio.h>

int main(void)
{
	/*
	int 변수명 = 초기값;
	switch(변수명){
	case 값1 : 코드1;
	break;
	case 값1 : 코드1;
	break;
case 값2 : 코드2;
	break;
case 값3 : 코드3;
	break;
case 값4 : 코드4;
	break;
	.
	.
	.
	default: 코드;
	break;
	*/

	int day;
	printf("요일을 선택하세요 (1~7 중 택1) : ");
	scanf_s("%d", &day);
	switch (day) {
	case 1: printf("월요일입니다. \n");
		break;
	case 2: printf("화요일입니다. \n");
		break;
	case 3: printf("수요일입니다. \n");
		break;
	case 4: printf("목요일입니다. \n");
		break;
	case 5: printf("금요일입니다. \n");
		break;
	case 6: printf("토요일입니다. \n");
		break;
	case 7: printf("일요일입니다. \n");
		break;
	default: printf("유효하지 않은 입력입니다. (1~7 중에 입력해 주세요.)");
		break;
	}
	return 0;
}