#include<stdio.h>

int main()//�й��ɵĲ�����û�й��ɵĲ���,��ͬѭ�� 
{
	int i,j,k;
	
	for (i=1;i<=4;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");//j���һ���˳� 
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
