#include <stdio.h>

// void ����
void sayHello()
{
	printf("Hello World \n");
}

// retrun ����
int add(int a, int b)
{
	return a + b;
}

//�Ű����� ����
void name(char* name) 
{
	printf("Hello, %s \n", name);
}

int main(void)
{
	/*
	��ȯ�� �Լ��̸�(�Ű�����)
	{
		return ������ ��;
	}
	��ȯ�� : �Լ��� ����� ��Ÿ�� �� ����� �ڷ���
	�Լ� �̸� : ȣ���� �� ����� �̸� (������ �������)
	�Ű����� : �Լ��� �۾��� �����ϱ� ���� �ʿ��� �Է°� (�������� ����)
	return : �Լ��� �۾��� ���� �� ȣ���� ������ �����ִ� ��ɾ� (void �� �� ��������) / void : �ڷ����� ���ų� ��ȯ�� ���� ���� ��� �� (����,����� X)
	*/

	 // void ����
	sayHello(); 

	printf("\n");

	// return ����
	int result = add(5,3); // add (a��,b��);
	printf("result : %d \n", result);

	printf("\n");

	// �Ű����� ����
	name("�ؼ�"); // name("����");




	return 0;
}