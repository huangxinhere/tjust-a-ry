#include<stdio.h>

int main()
{
	int i,j;
	
	for (i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d * %d = %-3d  ",j,i,i*j);
		 } //-3d��ʾ����룬ռ��λ 
		printf("\n");
	} 
 } 
