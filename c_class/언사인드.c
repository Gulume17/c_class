#include <stdio.h>

int main(void)
{
	unsigned char ch; // 값의 범위: 0~255 (-128 ~ 127)
	unsigned short sh; // 값의 범위: 0~65,535 (-32,768 ~ 32,767)
	unsigned int in; // 값의 범위: 0~4294967295 (-21억 ~ 21억)
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