#include <stdio.h>
#include <limits.h>
int main()
{
	//printf("%d %d\n", INT_MIN, INT_MAX);
	int min = INT_MAX, max = INT_MIN, number;
	
	printf("������ �Է��ϼ���(���� ^Z�� �����ø� �˴ϴ�) : ");
	while(scanf("%d", &number) != EOF)
	{
		if(number < min)
			min = number;
		if(number > max)
			max = number;
	}
	if(min == INT_MAX)
		printf("�Է��� ���ڰ� �����ϴ�.\n");
	else
		printf("�Է��� �� �� �߿�  �ּڰ� = %d �̰� �ִ� = %d�Դϴ�.\n", min, max);
	
	return 0;
}
