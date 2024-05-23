#include <stdio.h>

int main(void)
{
    int H = 0;
    int M = 0;
    scanf("%d %d", &H, &M);
    M = M - 45;
    if (M < 0)
    {
        H -= 1;
        if (H < 0)
            H += 24;
        M += 60;
    }
    printf("%d %d", H, M);
    return 0;
}