#include<stdio.h>

int main()
{
	int a=0,n;
	printf("input n:");
	scanf("%d",&n);
	while(n--)
	{
		printf("%d\n",a++*2);//n代表循环的次数 
	}
 } 
 //控制次数：逐渐递减增，减到零或加到某一特定值；广义：逐次…不符合条件为止 
