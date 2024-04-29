#include <stdio.h>

int main(void)
{
	int n;
	int i;

	long long f[90] = { 0, 1 };

	scanf("%d", &n);

	for (i = 2; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	printf("%lld", f[n]);

	return 0;
}