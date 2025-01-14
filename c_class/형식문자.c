#include <stdio.h>

int main(void)
{
// %d : char,short,int (부호 있는 10진 정수)
// %ld : long (부호 있는 10진 정수)
// %lld : long long (부호 있는 10진 정수)
// %u : unsigned int (부호 없는 10진 정수)
// %f : float (10진수 방식의 부동소수점 실수)
// %lf : long double, double
// %x : float,double
// %c : char,short,int (값에 대응하는 문자)
// %s : 문자열
// %p : 포인트 주소값
// %i : int 출력
// 'c언어 서식지정자' 라고 구글에 치면 자세하게 관련된 내용들이 나와있다.

	long long x = 2200000000; // (int랑 %d를 쓰면 안나온다, 21억 까지는 가능)
	printf("값 : %lld\n", x);

	printf("%10d\n", 42); // 10칸 중에 2칸 빼고는 공백으로 사용된다는
	printf("%5d\n", 12345); 
	printf("%5d\n", 123456);
	printf("%-10d", 123456); // 왼쪽 정렬
	printf("%d\n", 1);
	printf("%010d\n" , 123456);// 공백에 0이 붙음
	printf("%8.2f\n", 3.14159);
	// 8: 칸 개수 
	// 2: 소수점 자리수

	printf("%8.3f\n", 3.14159); // 5가 반올림 되면서 3.142가 됨
	printf("%8.4f\n", 3.14159); // 3.1416 , 9만 반올림

	return 0;
}