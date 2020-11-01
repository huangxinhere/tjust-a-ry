#include<stdio.h>

int inverse_n(int pos,int n,int x)
{
	int i;
	
	for(i=1;i<=n;i++)
	{
		i=i*2;
	}
	i=i-1;
	
	return (x^(i<<pos));
}

int main()
{
	int pos,n,x;
	
	printf("input num.pos:\n");    scanf("%d",&pos);
	printf("input total n:\n");    scanf("%d",&n);
	printf("input the x:\n");    scanf("%d",&x);
	
	printf("the result is %d\n",inverse_n(pos,n,x));
}
