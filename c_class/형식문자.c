#include <stdio.h>

int main(void)
{
// %d : char,short,int (��ȣ �ִ� 10�� ����)
// %ld : long (��ȣ �ִ� 10�� ����)
// %lld : long long (��ȣ �ִ� 10�� ����)
// %u : unsigned int (��ȣ ���� 10�� ����)
// %f : float (10���� ����� �ε��Ҽ��� �Ǽ�)
// %lf : long double, double
// %x : float,double
// %c : char,short,int (���� �����ϴ� ����)
// %s : ���ڿ�
// %p : ����Ʈ �ּҰ�
// %i : int ���
// 'c��� ����������' ��� ���ۿ� ġ�� �ڼ��ϰ� ���õ� ������� �����ִ�.

	long long x = 2200000000; // (int�� %d�� ���� �ȳ��´�, 21�� ������ ����)
	printf("�� : %lld\n", x);

	printf("%10d\n", 42); // 10ĭ �߿� 2ĭ ����� �������� ���ȴٴ�
	printf("%5d\n", 12345); // 
	printf("%5d\n", 123456);
	printf("%-10d", 123456);
	printf("%d\n", 1);
	printf("%010d\n" , 123456);

	return 0;
}