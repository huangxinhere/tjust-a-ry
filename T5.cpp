#include<stdio.h>

int main()
{
	int i,n;
	int count; 
	printf("ËØÊıÎª£º\n");
	
	for(n=1;n<=100;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				break;	///
			}

		}
			if(i==n)
			{
				printf("%10d",n);
				count++;
			}
		
			if(count%5==0)
			{
				printf("\n");
			}
	}
 } 
