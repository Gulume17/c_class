#include <stdio.h>

int main(void)
{
	// int a[5] = { 1,2,3,4,5 };
	// p+0 = a[0] = 1 / p+1 = a[1] = 2 / p+2 = a[2] = 3 / p+3 = a[3] = 4 / p+4= a[4] = 5

	int a[5] = { 1,2,3,4,5 };
	int* ptr = a;
	printf("%p \n", ptr); // a[0]

	int b = 5;
	int* b_ptr = &b; // b_ptr은  b의 주소를 가르킨다.
	//*b_ptr = 10; // 주석을 제거하면 10이 출력된다.
	b_ptr[0] = 10;
	printf("%d \n", *b_ptr);
	printf("%d \n", b);

	/*
	1. 배열의 이름은 배열의 첫번째 요소의 주소를 가르키는 포인터로 동작한다.
	2. 배열의 요소에 접근할 때 배열의 인덱스를 사용하나, 포인터의 역참조를 사용하나 둘 다 데이터에 접근이 가능하다.
	*/


	return 0;
}