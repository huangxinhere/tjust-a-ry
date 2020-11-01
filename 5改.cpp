#include<stdio.h>

int main()
{
	int i,j,k;
	int n,m,no;
	
	printf("input n:\n");   scanf("%d",&n);
	
	i=0;
	j=1;
	k=1;
	
	no=n/3;
		
	for (m=1;m<=no;m++)
	{
		i=i+j+k;
		j=i+j+k;
		k=i+j+k;
	}
	
	if (n%3==0)	printf("T_%d=%d\n",n,i);
	else if ((n+1)%3==0)	printf("T_%d=%d\n",n,k);
	else  	printf("T_%d=%d\n",n,j);
}
