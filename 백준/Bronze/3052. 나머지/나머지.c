#include <stdio.h>

int main()
{
	int n, result = 0;
	int remain[42] = {};

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		remain[i] = (n % 42);
	}
	for (int i = 0; i < 10; i++)
	{
		int cnt = 0;
		for (int j = i + 1; j < 10; j++)
		{
			if (remain[i] == remain[j]) cnt++;
		}
		if (cnt == 0) result++;
	}

	printf("%d", result);

	return 0;
}