#include<stdio.h>

int gcd(int a,int b)
{
    int max,min,max_gys;
    int n;
    
   	a>b?(a=max,b=min):(a=min,b=max); 
   	
   	while (1)
{
	   if(max%min==0)
   	{
   		max_gys=min;break;
	   }
	
	else if(max%min!=0)
	{
		max=min;
		min=max%min;
    }
}

 	return  max_gys;	
}

int main()
{
	int i,j,n;
	int sum=0;
	
	printf("input the n:\n");   scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n-1;j++)
		{
			sum=sum+gcd(i,i+j);//gcd没有运行成功 
		}
	}
	printf("%d",sum);
}
