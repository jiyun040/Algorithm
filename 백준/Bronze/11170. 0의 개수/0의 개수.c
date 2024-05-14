#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int T, N, M, num;
	int i, j;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		int cnt = 0;

		scanf("%d %d", &N, &M);
		for (j = N; j <= M; j++)
		{
			num = j;

			if (num == 0)
				cnt += 1;

			while (num > 0)
			{
				if (num % 10 == 0)
				{
					cnt++;
				}
				num = num / 10;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}