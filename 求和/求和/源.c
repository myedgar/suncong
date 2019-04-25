#include<stdio.h>

int main()
{
	int sum = 0;
	int i,j;

	printf("请输入一个数");
	scanf("%d", &j);

	for(i = 1; i <= j; i++)
	{
		sum = sum + i;
	}
	printf("和是%d", sum);
	printf("\n");

	return 0;

}