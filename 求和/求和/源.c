#include<stdio.h>

int main()
{
	int sum = 0;
	int i,j;

	printf("������һ����");
	scanf("%d", &j);

	for(i = 1; i <= j; i++)
	{
		sum = sum + i;
	}
	printf("����%d", sum);
	printf("\n");

	return 0;

}