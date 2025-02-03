#include <stdio.h>

int main(void)
{
	int a = 10, b; // a= 10, b =?
	int* c = &b; // c라는 포인터변수에 b의 주소를 가리키고 있을 것

	b = a--; // a-- : 10
	b += 20; // b = b+20 (30)
	printf("%d", *c); // b의 주소의 역참조 : 30


	//정보처리기사 시험문제
	int n = 4; // 
	int* pt = NULL;
	pt = &n;
	printf("%d", &n + *pt - *&pt + n);
	// n의 주소값 100번지라고 치고 100 + 4 - 100 + 4 = 8


	return 0;
}