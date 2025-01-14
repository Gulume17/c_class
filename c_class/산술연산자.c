#include <stdio.h>

int main(void)
{
// 1. + (더하기)
// 2. - (빼기)
// 3. * (곱하기)
// 4. / (나누기)
// 5. % (나머지)

	int number1 = 7, number2 = 3;
	printf("%d + %d = %d \n", number1, number2, number1 + number2);
	printf("%d - %d = %d \n", number1, number2, number1 - number2);
	printf("%d * %d = %d \n", number1, number2, number1 * number2);
	printf("%d / %d = %d \n", number1, number2, number1 / number2);
	printf("%d %% %d = %d \n", number1, number2, number1 % number2);

	int num1 = 1;
	float num2 = 1.2;
	printf("%d + %0.1f = %0.1f \n", num1, num2, num1 + num2);


	return 0;
}