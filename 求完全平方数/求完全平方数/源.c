#include<stdio.h>
#include<math.h>

int main()
{
	int a; //��ʼ����
	int b; //a����100�󿪷�����
	int c; //a����268�󿪷ŵ���

	for(a = 0; a < 1000; a++)
	{
		b = sqrt((double)a + 100);
		c = sqrt((double)a + 268);
		if(b * b == a + 100&&c * c == a + 268)
		printf("�������%d\n",a);
	}

	return 0;
}