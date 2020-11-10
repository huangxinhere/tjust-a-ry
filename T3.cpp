#include<stdio.h>

int main()//有规律的部分与没有规律的部分,不同循环 
{
	int i,j,k;
	
	for (i=1;i<=4;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");//j会加一再退出 
		}
		for(k=0;k<=8-j-i;k++)
		{
			printf("*");
		 } 
		 printf("\n");
	}
	
	for (i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		 } 
		 printf("\n");
	}
 } 
