#include <stdio.h>

int main(void)
{
	unsigned char ch; // ���� ����: 0~255 (-128 ~ 127)
	unsigned short sh; // ���� ����: 0~65,535 (-32,768 ~ 32,767)
	unsigned int in; // ���� ����: 0~4294967295 (-21�� ~ 21��)
	ch = 128;
	sh = 50000;
	in = 4100000000;
	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%u\n", in);

	int num;
	num = 255;
	printf("%d\n", num); 

	return 0; 
}