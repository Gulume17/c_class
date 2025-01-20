#include <stdio.h>

int main(void)
{
	/*
	자료형 변수명 = 초기화
	do {
	실행시킬 코드;
	증감식;
	} while (조건식);
	*/

	int do_while = 1;
	do {
		printf("do while문 %d번 연습중 \n", do_while);
		do_while++;
	} while (do_while <= 10);
	// 조건을 충족하지 않아도 최소 1번은 코드를 실행한다. ex) : } while (do_while >= 10);
	//while문과의 차이점 : 최소 실행 횟수 

	return 0;
}