#include<stdio.h>
#include<math.h>

int main()
{
	int a; //初始整数
	int b; //a加上100后开方的数
	int c; //a加上268后开放的数

	for(a = 0; a < 1000; a++)
	{
		b = sqrt((double)a + 100);
		c = sqrt((double)a + 268);
		if(b * b == a + 100&&c * c == a + 268)
		printf("这个数是%d\n",a);
	}

	return 0;
}