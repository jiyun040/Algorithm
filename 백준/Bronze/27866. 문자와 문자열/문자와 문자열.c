#include <stdio.h>

int main(void)
{
	char a[1001]; //문자열의 길이 제한
	scanf("%s\n", a);

	int i;
	scanf("%d", &i);
	printf("%c", a[i - 1]); //문자("%c") 출력 
	
	return 0;
}