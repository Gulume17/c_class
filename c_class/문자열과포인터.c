# include <stdio.h>

int main(void)
{
	char good[] = "Good!"; // 배열로 불러온 변수는 주소를 바꿀 수 없다.
	char* bad = "Bad!"; // 포인터로 불러온 변수는 컨텐츠를 바꿀 수 없다.
	printf("%s, %s", good, bad);

	printf("\n");

	good[0] = 'H'; // 컨텐츠를 바꾼다 (G->H 로 바꿈) (O)
	//good = "new good"; // 주소를 바꾼다 (X)
	printf("%s, %s", good, bad);

	printf("\n");

	// bad[0] = 's'; // 컨텐츠가 바뀌지 않는다 (X)
	bad = "new bad"; // (Bad -> new bad) 주소를 바꾼다. (O)
	printf("%s, %s", good, bad);


	return 0;
}