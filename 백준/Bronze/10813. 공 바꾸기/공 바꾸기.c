#include <stdio.h>

int main()
{
	int N, M;
	int i, j, tmp;
	int basket[100];

	scanf("%d %d", &N, &M);

	for (int k = 1; k <= N; k++)
	{
		basket[k] = k;
	}
	for (int k = 1; k <= M; k++)
	{
		scanf("%d %d", &i, &j);

		tmp = basket[i];
		basket[i] = basket[j];
		basket[j] = tmp;
	}
	for (int k = 1; k <= N; k++)
	{
		printf("%d ", basket[k]);
	}
	return 0;
}