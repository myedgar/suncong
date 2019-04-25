#include<stdio.h>
 int sum(int n);

 int main()
 {
	 int n;
	 printf("请输入一个数");
	 scanf("%d", &n);
	 printf("和是%d", sum(n));
	 return 0; 
 }
 int sum(int n)
 {
	 if( n== 1)
     return 1;
	 else
     return n + sum(n -1);
 }