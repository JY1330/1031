#include <stdio.h>
int main()
{
	int i, j, tot_rep, rep;
	char ch;
	
	printf("반복 횟수 입력 : ");
	scanf("%d", &tot_rep);

	i = 0;
	while(i < tot_rep)
	{
		printf("문자와 회수 입력 : ");
		scanf(" %c %d", &ch, &rep);
		j = 0;
		while(j < rep)
		{
			printf("%c", &ch);
		}
		j++;
		printf("\n");
	}
	i++;
	return 0;
}
