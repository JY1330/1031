#include <stdio.h>
int main()
{
	int fact = 1;
	int i, n;
	
	printf("숫자 입력 : ");
	scanf("%d", &n);
	
	for(i = n; i >= 1; i--)
	{
		fact *= i;
		printf("%d * ", i);
	}
	
	printf("\b\b = %d",fact); 
	
	return 0;
}
