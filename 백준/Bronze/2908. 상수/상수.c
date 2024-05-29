#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int tmp1 = 0, tmp2 = 0;

	tmp1 = (a % 10) * 100 + ((a / 10) % 10) * 10 + a / 100;
	a = tmp1;
	tmp2 = (b % 10) * 100 + ((b / 10) % 10) * 10 + b / 100;
	b = tmp2;

	if (a > b) printf("%d", a);
	else if (a < b) printf("%d", b);

	return 0;
}