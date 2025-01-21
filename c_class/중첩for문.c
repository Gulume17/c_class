#include <stdio.h>

int main(void)
{

	/*
	for() {
	   for (){
	       }
	    }
	*/

	int first_for, second_for;
	for (first_for = 1; first_for <= 3; first_for ++) {// 바깥 반복문
		// 1~3까지 증가 (행)
		for (second_for = 1; second_for <= 2; second_for++) {//중첩 반복문
			printf("%d 행 %d 열 \n", first_for, second_for);
	}
		printf("\n");
	}
	// 반복문 i(바깥 반복문) , j(중첩 반복문)로 많이 돌린다 (변수명)

	return 0;
}

// day9 정리
/*
1. do while문 (최소 1번 실행)
2. for문 (초기화; 조건식; 증감식)
3. 무한루프 
4. break문 
5. continue문
6. 중첩 for문 
*/
