#include <stdio.h>

int main(void)
{
	int i, arr, num, max = 0;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &num);
		if (num > max)
		{
			max = num;
			arr = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d", arr);

	return 0;
}