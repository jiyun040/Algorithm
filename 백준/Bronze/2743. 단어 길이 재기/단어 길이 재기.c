#include <stdio.h>
#include <string.h> //strlen 함수 사용하기 위해

int main(void)
{
	char a[101];
	scanf("%s", a);
	printf("%d", strlen(a));
	
	return 0;
}