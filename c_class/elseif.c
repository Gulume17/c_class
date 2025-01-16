#include <stdio.h>

int main(void)
{
/*
if (조건문) {
조건을 만족할 경우 실행
}
else if (조건2){
조건2를 만족할 경우 실행
}
else if (조건3){
조건3를 만족할 경우 실행
}
else if (조건4){
조건4를 만족할 경우 실행
}
else {
모든 조건을 만족하지 않을 경우
}
*/

	int num_a;
	printf("숫자 입력 : ");
	scanf_s("%d", &num_a);
	if (num_a > 3) {
		printf("고양이 \n");
	}
	else if (num_a == 1) {
		printf("강아지 \n");
	}
	else { // 4보다 작고 1보다 크다면 
		printf("햄토리 \n");
	}

	// 학점이 90점 이상이라면 A 학점, 참 잘했어요! 출력
	// 입력받은 학점 **은 80 이상이라면 B학점 
	// 입력받은 학점 **은 70 이상이라면 C학점 
	// 입력받은 학점 **은 60 이상이라면 D학점 
	//입력받은 값이 범위내에 없다면 재시험 출력
	int score;
	printf("학점 입력 : ");
	scanf_s("%d", &score);
	if (score >= 90) {
		printf(" %d 는 A 학점, 참 잘했어요! \n" , score);
	}
	else if (score >= 80) {
		printf("%d 는 B학점 \n" , score);
	}
	else if (score >= 70) {
		printf("&d 는 C 학점 \n" , score);
	}
	else if (score >= 60) {
		printf("&d 는 D 학점 \n", score);
	}
	else {
		printf("재시험 \n");
	}
	
	// 복합조건 버스비
	// 0~7세 유아는 800 원
	// 8 ~ 19세 학생은 1200 원
	// 20 ~ 34세 청녀은 1600 원
	// 35 ~ 59세 중년은 2000 원
	// 60 ~ 150세 노년 버스비는 무료입니다.
	// 무언가 잘못됨을 감지.. 사람이 아닌데.. 

	int age;
	printf("나이를 입력해주세요 : ");
	scanf_s("%d", &age);
	if (age >= 0 && age <= 7) {
		printf("%0~7세 유아는 800 원 입니다. \n");
	}
	else if (age >= 8 && age <= 19) {
		printf ("%8~19세 학생은 1200 원 입니다. \n");
	}
	else if (age >= 20 && age <= 34) {
		printf(" %20~34세 청년은 1600 원 입니다. \n");
	}
	else if (age >= 35 && age <= 59) {
		printf("%35~59세 중년은 2000 원 입니다. \n");
	}
	else if (age >= 60 && age <= 150) {
		printf("60~150세 노년은 무료 입니다. \n");
	}
	else {
		printf("무언가 잘못됨을 감지.. 사람이 아닌데 \n");
	}








	return 0;
}