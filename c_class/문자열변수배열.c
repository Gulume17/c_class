#include <stdio.h>

int main(void)
{
	char string_text[] = "안녕하세요!"; // (안(2) + 녕(2) + 하(2) + 세(2) + 요(2) + ! (1) + null (1) = 12바이트) 
	printf("문자열 변수 string_text의 길이는 : %zd \n", sizeof(string_text)); // sizeof 함수는 자료형의 크기를 알아내기 위해서

	char english_text[] = "Hello!"; // (H (1) + e(1) + ㅣ(1) + l(1) + o(1) + !(1) + null (1) = 7바이트 )
	printf("영어 문자열 english_text의 길이는 : %zd \n", sizeof(english_text));

	char long_text[50] = "This is long";
	printf("문자열 변수 long_text의 길이는 : %zd \n",sizeof( long_text));

	// printf("배열 long_text에 초기화된 문자열의 길이 : %zd \n" , strlen(long_text)); 

	printf("%s \n", long_text); 


	//
	char name[30] = "My name is 은지";
	printf("%s \n", name); 

	name[10] = '\0';
	printf("%s \n", name);
	printf("문자열 변수 name의 길이는 : %zd \n", sizeof(name));

	/*
	char scanfs_string[50];
	printf("scanfs_strung 문자열을 입력하세요 : ");
	scanf_s("%s", scanfs_string , (unsigned int) sizeof (scanfs_string)); // scanf_s에서 문자열은 &를 받지(쓰지) 않는다.
	printf("%s \n", scanfs_string); */

	char gets_string[50];
	printf("gets_s로 문자열을 입력하세요 : ");
	gets_s(gets_string, sizeof(gets_string));
	printf("%s \n", gets_string);
	//

	return 0;
}