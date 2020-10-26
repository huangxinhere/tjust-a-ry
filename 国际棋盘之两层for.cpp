#include<stdio.h>

int main()
{
	int i,j,m,n;//标准的棋盘是8*8 
	printf("please sure how big the chess you want:\n ");
	scanf("%d",&n);
	
	for (j=1;j<=n;j++)
	{
		for (i=1;i<=n;i++)
		{
			m=i+j;
			if(m%2==0)
			{
				printf("  white  ");
			}
			else 
			{
				printf("  black  ");
			}
		
		}
		printf("\n"); 
	}
}
