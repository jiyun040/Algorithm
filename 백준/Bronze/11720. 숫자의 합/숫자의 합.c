#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	char a[100];
	int n, sum = 0;

	scanf("%d", &n);
	scanf("%s", a);

	for (int i = 0; i < n; i++)
	{
		sum += a[i] - '0'; //scanf는 \n 제거가 안되기 때문에 개행문자 제거
	}
	printf("%d", sum);

	return 0;
}