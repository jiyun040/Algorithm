#include <stdio.h>

int main()
{
    int N, result = 1;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        result *= i;
    }
    printf("%d", result);
    
    return 0;
}
