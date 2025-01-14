#include <stdio.h>

int main(void)
{
// 감소 (변수 --; / -- 변수;)
// 증가 (변수 ++; / ++ 변수;)

// ++ 변수와 변수 ++ 의 차이점
// int a = ++b;  / int a = b++;
// 예제
	int put_a = 10, put_b = 20;
	printf("A : %d \n", put_a);
	printf("A : %d \n", ++put_a); // ++ 이 먼저 실행 (10 11 11)
	printf("A : %d \n", put_a);
	printf("\n");
	printf("B : %d \n", put_b);
	printf("B : %d \n", put_b++); // ++ 이 나중에 실행 (20 20 21)
	printf("B : %d \n", put_b);

	return 0;
}

// day 5 정리
/*
1. %8.2f (반올림)
2. scanf_s  (입력 함수 , 변수와 자료형 지정 , & 연산자)
3.  산술연산자 (자료형이 다를 때 결과값 서식 지정자 다르다)
4. 대입 연산자 (a += b / a = a+b)
5. 비교연산자 (== 같다를 표현한다)
6. 증감연산자 (++ 이나 -- 가 변수의 앞,뒤에 붙는지에 때라 결과값이 다르게 도출된다)
*/