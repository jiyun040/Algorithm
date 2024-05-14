#include <stdio.h>

int main(void)
{
	int n, i, j, v, sum = 0;
	scanf("%d", &n);
	/*int a[n];*/int* a = (int*)malloc(n * sizeof(int));

	for (i = 0; i < n; i++) 
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &v);

	for (j = 0; j < n; j++)
	{
		if (v == a[j])
		{
			sum++;
		}
	}
	printf("%d", sum);

	return 0;
}