#include<stdio.h>

int gcd(int a,int b)
{	
	if(a%b==0)
	{
		return b;
	}
	return gcd(b,a%b);
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	
	printf("最大公因数是%d\n",gcd(a,b));
}
