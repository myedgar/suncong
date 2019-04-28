#include<stdio.h>

int main()
{
	int i;      //当月利润
	int lirun1; //低于10万或者等于10万
	int lirun2; //高于10万或者小于20万
	int lirun3; //20万到40万
	int lirun4; //40万到60万
	int lirun5; //60万到100万
	int lirun;  //利润提成

	printf("请输入当月利润：");
	scanf("%d",&i);
	lirun1 = 100000 * 0.1;
	lirun2 = lirun1 + 100000 * 0.075;
	lirun3 = lirun2 + 200000 * 0.05;
	lirun4 = lirun3 + 200000 * 0.03;
	lirun5 = lirun4 + 400000 * 0.015;


	if(i <= 100000)
		lirun = i * 0.1;
	else if(i <= 200000)
		lirun = lirun1 + (i - 10000) * 0.075;
	else if(i <= 400000)
		lirun = lirun2 + (i - 200000) * 0.05;
	else if(i <= 600000)
		lirun = lirun3 + (i - 400000) * 0.03;
	else if(i <= 100000)
		lirun = lirun4 + (i - 600000) * 0.015;
	else if(i > 1000000)
		lirun = lirun5 + (i - 100000) * 0.01;

     printf("本月应发奖金为%d",lirun);

	 return 0;
}