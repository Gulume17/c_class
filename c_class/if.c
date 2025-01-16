#include <stdio.h>

int main(void)
{

/*
if (조건식) {
조건을 만족할 경우 실행항 코드를 작성; (true)
}
else {
조건이 만족하지 못할 경우 실행할 코드를 작성; (false) 
}
// if 문만 써도 상관 없음

if문의 소괄호 (조건) 에는 true , false 로 나뉘는데 true일 경우에만 {중괄호} 코드를 실행한다. 

if (조건식) 
실행할 코드가 한줄이라면 {중괄호} 생략 가능
*/

	// if문 예제
	int ifNumber = 10;
	if (ifNumber < 500) {
		printf("%d 이 500보다 작니? 에 대한 물음은 참입니다. \n", ifNumber);
	}

	if (ifNumber == 3) {
		printf("%d는 3과 같아 \n", ifNumber);
	}

	// 사용자로부터 걸음수를 입력받아 걸음 수를 조건문으로 만들고 10000보 이상일 때 
	// 하루에 ***** 보 걷다니 대단해요 좋은 습관입니다!

	int walkCount;
	printf("당신은 하루에 얼마나 걷나요?");
	scanf_s("%d", &walkCount);
	if (walkCount >= 10000) {
		printf("%d보 걷다니 대단해요 ~~~~", walkCount);
	}

	// if문과 else문 예제 1
	char alpha = 'A';
		if (alpha == 'B') {
			printf("alpha는 B와 같습니다.");
		}
		else {
			printf("alpha는 B와 다릅니다.");
		}

		//// if문과 else문 예제 2
		int likeNumber;
		printf("당신이 좋아하는 숫자를 입력하세요 : ");
		scanf_s("%d", &likeNumber);
		if (likeNumber <= 10) {
			printf("당신이 좋아하는 숫자는 10 이상이군요~");
		}
		else {
			printf("당신이 좋아하는 숫자는 10 미만이군요 ~");
		}
	return 0;
}

//if문과 else문은 보통 같이 쓰임