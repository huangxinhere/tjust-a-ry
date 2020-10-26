#include<stdio.h>

int main()
{
	unsigned set_n(unsigned x,unsigned pos,unsigned n);
	unsigned reset_n(unsigned x,unsigned pos,unsigned n);
	unsigned inverse_n(unsigned x,unsigned pos,unsigned n);
	
	unsigned x,pos,n;//仍要说明 
	
	printf("输入无符号整数x：\n");
	scanf("%u",&x);
	printf("输入位数pos：\n");
	scanf("%u",&pos);
	printf("输入位数n：\n");
	scanf("%u",&n);
	
	printf("第%u位的n位开始设为1后为：%u\n",pos,set_n(x,pos,n));
	printf("第%u位的n位开始设为0后为：%u\n",pos,reset_n(x,pos,n));
	printf("第%u位的n位开始取反后为：%u\n",pos,inverse_n(x,pos,n));
	
	return 0; 
	
}

unsigned set_n(unsigned x,unsigned pos,unsigned n)
{
	unsigned i=1;
	
	for( ;n>0;n--)//画图理解：1.还是对应部分进行逻辑运算 
	{              //          2多个位数，要一起算，不能逐个运算循环 （是一个数）
        			//3.就去找那个数。i的初值和位数拓展 
		i=i*2;
	}
	i=i-1;
	
	return (x|(i<<pos));
}

unsigned reset_n(unsigned x,unsigned pos,unsigned n)
{
	unsigned i=1;
	
	for ( ;n>0;n--)
	{
	 	i=i*2;
	}
	i=i-1;
	
	return (x&(i<<pos));
}

unsigned inverse_n(unsigned x,unsigned pos,unsigned n)
{
	unsigned i=1;
		for ( ;n>0;n--)
	{
	 	i=i*2;
	}
	i=i-1;
	
	return (x^(i<<pos));
}
