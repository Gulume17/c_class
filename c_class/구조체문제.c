#include <stdio.h>


struct Student
{
	char name[20];
	int age;
	int grade;
};

int main(void)
{

	/*
	학생 구조체 만들기 (멤버 : 이름,나이,학년)
	구조체를 배열로 선언 후 초기화 (2개)
	모든 학생의 정보를 출력
	*/

	struct Student students[2] = {
		{"모은지",19,3},
		{"홍길동", 21,100 }
	};

	for (int i = 0;i < 2;i++) {
		printf("이름 : %s, 나이 : %d, 학년 : %d \n", students[i].name, students[i].age, students[i].grade);
	}

	return 0;
}