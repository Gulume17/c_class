#include<stdio.h>

int main(void)
{
	//int* p1, *p2, *p3, *p4, *p5; = int* p[5];
	//int* p[5];  
	// int *p[1] = &a; : 포인터변수 / a * b : 곱하기 / * p: 역참조
	/*
	int* p[5];
	int a = 3;
	p[1] = &a;
	printf("%d \n", *p[1]);
	*/

	// 3길이의 포인터 배열을 선언하고, 세개의 정수형 변수를 선언한다.
	// 포인터 배열에 각 변수의 주소를 저장한 후
	// for문을 이용해서 포인터 배열을 통해 각 변수에 들어있는 값을 출력해보기
	// 포인터 배열[*]가 가리키는 값 : * 

	int* ptr[3];
	int x = 10, y = 20, z = 30;
	ptr[0] = &x;
	ptr[1] = &y;
	ptr[2] = &z;

	for (int i = 0; i < 3; i++) {
		printf("ptr[%d]가 가리키는 값 : %d \n" , i, *ptr[i]);
	}


	return 0;
}