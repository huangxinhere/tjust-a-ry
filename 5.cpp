#include<stdio.h>

int main()
{
	int i,j,m,n;
	i=0;
	j=1;
	
	printf("");   scanf("%d",&n);
	
	if (n%2==0)
	{
		for (m=1;m<(n/2);m++)
		{
			i=j+i;
			j=j+i;
		}
	}
	printf("T_%d=%d\n",n,i);
		if (n%2!=0)
	{
		for (m=1;m<((n+1)/2);m++)
		{
			i=j+i;
			j=j+i;
		}
	}
	printf("T_%d=%d\n",n,j);

}
