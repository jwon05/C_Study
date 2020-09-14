#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int remain(int a, int b);

int main(void)
{
	int a, b;

	printf("두 수를 입력하시오: ");
	scanf_s("%d %d", &a, &b);

	printf("%d\n", add(a, b));
	printf("%d\n", sub(a, b));
	printf("%d\n", mul(a, b));
	printf("%d\n", div(a, b));
	printf("%d\n", remain(a, b));

	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int remain(int a, int b)
{
	return a % b;
}