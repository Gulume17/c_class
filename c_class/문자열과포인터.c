# include <stdio.h>

int main(void)
{
	char good[] = "Good!"; // �迭�� �ҷ��� ������ �ּҸ� �ٲ� �� ����.
	char* bad = "Bad!"; // �����ͷ� �ҷ��� ������ �������� �ٲ� �� ����.
	printf("%s, %s", good, bad);

	printf("\n");

	good[0] = 'H'; // �������� �ٲ۴� (G->H �� �ٲ�) (O)
	//good = "new good"; // �ּҸ� �ٲ۴� (X)
	printf("%s, %s", good, bad);

	printf("\n");

	// bad[0] = 's'; // �������� �ٲ��� �ʴ´� (X)
	bad = "new bad"; // (Bad -> new bad) �ּҸ� �ٲ۴�. (O)
	printf("%s, %s", good, bad);


	return 0;
}