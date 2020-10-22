#include<stdio.h>

int main()
{
	int i,j,sum,n;
	sum=2;
	i=1;
	j=1;
	for (n=1;n<=20;n++)
	{
		i=i+j;
		sum=sum+i;
		j=i+j;
		sum=sum+j; 
	}
	printf("sum=%d\n",sum);
 } 
