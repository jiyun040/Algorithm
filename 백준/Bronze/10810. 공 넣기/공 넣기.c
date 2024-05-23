#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int start, end, ball;
    int basket[100] = {};
    
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d %d", &start, &end, &ball);
        for (int j = start; j <= end; j++)
        {
            basket[j] = ball;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        printf("%d ", basket[i]);
    }
    return 0;
}