#include <stdio.h>

void hello(char* name)
{
	printf("안녕하세요 %s님  \n" , name);
}

int main(void)
{
	// 사용자에게 이름을 입력받아서 안녕하세요 **님 이라고 인사하는 프로그램


	char name[20];
	printf("이름을 입력해주세요 : ");
	scanf_s("%s",name, (unsigned) sizeof(name));
	hello (name);
	
	return 0;
}