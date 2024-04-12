#include <stdio.h>

int main(void)
{
	int num1, num2, num3, result;
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 == num2 && num2 == num3)
	{
		result = 10000 + num1 * 1000;
	}
	else if (num1 == num2 || num1 == num3)
	{
		result = 1000 + num1 * 100;
	}
	else if (num2 == num3)
	{
		result = 1000 + num2 * 100;
	}
	else if (num1 > num2 && num1 > num3)
	{
		result = 100 * num1;
	}
	else if (num2 > num1 && num2 > num3)
	{
		result = 100 * num2;
	}
	else if (num3 > num1 && num3 > num2)
	{
		result = 100 * num3;
	}

	printf("%d", result);

	return 0;
}