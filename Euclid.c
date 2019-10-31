#include <stdio.h>
int main()
{
	int x, y, r, temp;
	
	printf("두개의 정수를 입력 : ");
	scanf("%d%d", &x, &y);
	printf("%d와 %d의 ", x, y);
	
	if(y > x)
	{
		temp = x;
		x = y;
		y = temp;
	}
	while(y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	
	printf("최대 공약수는 %d입니다.\n", x);
	return 0;
}
