#include <stdio.h>

#define NAME_LEN 10 // 상수 
#define PHONE 20 // 상수
#define BRAND_NAME 20

typedef int integer; // int <-> integer // 기존 자료형의 명령어에 또 다른 명령어를 부여 // int와 integer 모두 사용 가능 (별명 같은 느낌)
typedef struct car car; // struct car <-> car
typedef struct customer ctm; // struct customer <-> ctm

/*
struct customer
{
	char name[NAME_LEN]; 
	char phone[PHONE]; 
	int number;
};
*/
struct car
{
	char brand[BRAND_NAME];
	int year;
};

int main(void)
{
	// 구조체 : 여러개의 타입을 묶어서 새로운 타입을 만들때 

	/* 
	struct customer c1,c2;
	//c1.number = 1;

	printf("이름 : ");
	gets_s(c1.name, NAME_LEN);  // gets_s() : 문자열 받아오는 함수 (day10 문자열변수배열 참고)

	printf("전화번호 : ");
	gets_s(c1.phone, PHONE);

	printf("고객번호 : ");
	scanf_s("%d", &c1.number);



	while (getchar() != '\n'); // 엔터값을 비우는 함수 엔터값까지 처리되지 않도록 함

	printf("이름 : ");
	gets_s(c2.name, NAME_LEN);

	printf("전화번호 : ");
	gets_s(c2.phone, PHONE);

	printf("고객번호 : ");
	scanf_s("%d", &c2.number);

	printf("\n\n *** 고객 정보 출력 *** \n\n");
	printf("%3d %-20s %-20s %-20s%8d\n", 1, c1.name, c1.phone, c1.number);
	printf("%3d %-20s %-20s %-20s%8d\n", 1, c2.name, c2.phone, c2.number);
	*/

	struct car myCar = { "Tesla", 2023 };
	struct car* ptr = &myCar;

	printf("브랜드 : %s \n", ptr->brand); // (*ptr).brand 의 축약형이 ptr->brand
	printf("연식 : %d \n", ptr->year); // myCar.year 동일



	
	
	
	



	return 0;
}