#include <stdio.h>

int fibonacci(int n);

int main(void)
{
	int n;
	printf("���� �Է��ϰ� Enter>");

	scanf_s("%d", &n);

	printf("%d��° �Ǻ���ġ ���� ���� = %d\n", n, fibonacci(n));

	return 0;
}

int fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}