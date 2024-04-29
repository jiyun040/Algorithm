#include <stdio.h>

int main(void)
{
	int n;
	int i;

	int f[45] = { 0, 1 };

	scanf("%d", &n);

	for (i = 2; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	printf("%d", f[n]);

	return 0;
}
