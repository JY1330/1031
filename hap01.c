#include <stdio.h>
int main()
{
	int i = 1, hap = 0, num;
	
	printf("숫자 입력: ");
	scanf("%d", &num);
	
	while(i <= num)
	{
		hap += i;
		i++;
	}
	
	printf("1부터 %d까지의 합 = %d 입니다.", num, hap);
	
	return 0;
}
