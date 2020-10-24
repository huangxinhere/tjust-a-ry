#include<stdio.h>

int main()
{
	int n,i;
	printf("input a number:\n  ");
	scanf("%d",&n); 
	
	for(i=2;i<=9;i++)
	{
		if(n%i==0)
		
		break;
		
	}
	if(i==10) //这五个数解决不了…因为5/5=1是整数 
	printf("%d是素数\n",n);//可以利用i来做条件，能够区分结果（先跳出的数与完成循环的数的区别在于i） 
	if(i<9)
	{
		if (n==5||n==1||n==3||n==7)//暂时认为==后面不能连跟多个数字，否则输出的值都为1 
		printf("%d是素数\n",n);//如果i等于要用==表示，否则=为赋值 
		else 
		{
			printf("%d不是素数\n",n); 
		} 
	}
	
 } 
