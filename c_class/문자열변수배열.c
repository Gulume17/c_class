#include <stdio.h>

int main(void)
{
	char string_text[] = "�ȳ��ϼ���!"; // (��(2) + ��(2) + ��(2) + ��(2) + ��(2) + ! (1) + null (1) = 12����Ʈ) 
	printf("���ڿ� ���� string_text�� ���̴� : %zd \n", sizeof(string_text)); // sizeof �Լ��� �ڷ����� ũ�⸦ �˾Ƴ��� ���ؼ�

	char english_text[] = "Hello!"; // (H (1) + e(1) + ��(1) + l(1) + o(1) + !(1) + null (1) = 7����Ʈ )
	printf("���� ���ڿ� english_text�� ���̴� : %zd \n", sizeof(english_text));

	char long_text[50] = "This is long";
	printf("���ڿ� ���� long_text�� ���̴� : %zd \n",sizeof( long_text));

	// printf("�迭 long_text�� �ʱ�ȭ�� ���ڿ��� ���� : %zd \n" , strlen(long_text)); 

	printf("%s \n", long_text); 


	//
	char name[30] = "My name is ����";
	printf("%s \n", name); 

	name[10] = '\0';
	printf("%s \n", name);
	printf("���ڿ� ���� name�� ���̴� : %zd \n", sizeof(name));

	/*
	char scanfs_string[50];
	printf("scanfs_strung ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", scanfs_string , (unsigned int) sizeof (scanfs_string)); // scanf_s���� ���ڿ��� &�� ����(����) �ʴ´�.
	printf("%s \n", scanfs_string); */

	char gets_string[50];
	printf("gets_s�� ���ڿ��� �Է��ϼ��� : ");
	gets_s(gets_string, sizeof(gets_string));
	printf("%s \n", gets_string);
	//

	return 0;
}