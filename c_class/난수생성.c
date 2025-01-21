#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// printf("");
	// rand() , srand(), time() 
	// rand로는 난수가 41로 고정되어 있고 srand안에 time함수를 써야 난수가 나온다.

	int rad;
	srand((unsigned)time(NULL)); // NULL은 0을 (빈칸) 의미함 // unsigned 함수는 양수값으로만 출력하기 위해서 
	rad = rand() % 100 + 1; // RAND_MAX : 0 ~ 32767 // rand(); : 난수 생성 함수 // % 100 + 1 : 1~100 사이에서만 난수 발생
	printf("%d", rad);
	return 0;

}