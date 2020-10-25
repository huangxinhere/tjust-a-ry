#include<stdio.h>
#include<math.h>

int main()
{
    long int i;
	int a,b;
	
	for (i=1;i<=5;i++)//完全平方数在c中本身的平方根再平方必定等于自身 
	{
		a=i+100;//i+100=a将出现 lvalue required as left operand of assignment
		if (sqrt(a)*sqrt(a)==a)
		{
			b=i+248;
			if(sqrt(b)*sqrt(b)==b)//两个必须都为真的条件可用&& 
			{
				printf("%ld is what we need\n",i);
			}
		}
	}
 } 
