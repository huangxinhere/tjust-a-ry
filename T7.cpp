#include<stdio.h>

int main()
{
	int count;
	int x,n;
	int multiply;
	
	while(true)
	{
		printf("please input a total number:\n");
		scanf("%d",&n);
		
		count=0;
		multiply=1;
		for( ;n>=1;n--)
		{
			count++;
			scanf("%d",&x);
			if (x%2!=0)
			{
				multiply=multiply*x;
			}
		}
		
		printf("%d %d\n",count,multiply );
	}
}
