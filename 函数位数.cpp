#include<stdio.h>



	int count_bits(unsigned x)
	{
		unsigned count=0;//要记得赋初值 
		while (x&1u)//u在1后面 
		{	
			count=count+1;
		}
		x>>=1;
		return count;
	}
	
	int int_bits(void)
	{
	return	count_bits( ~0u );//要返回给printf，和括号内void无关 
	}
	
	void printf_bits(unsigned x)
	{
		int i;//下面括号内为空，无参数 
		for (i=int_bits()-1;i>=0;i--)
		{
			putchar (((x>>i)&1u)?'1':'0' );//错误：printf("%d\n",(x&1u)?1:0;);
		 }                                 //区别得到值和输出字符 
	} 
	
	int main (void)
	{
		int count_bits;
		int int_bits;
		 
		unsigned na,nb;
		scanf("%u%u",&na,&nb);
		
		printf_bits(na); 
		printf_bits(nb);
		
		return 0;
	}
 
