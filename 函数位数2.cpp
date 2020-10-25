#include<stdio.h>

int main()
{
	unsigned set(unsigned x,unsigned pos);
	unsigned reset(unsigned x,unsigned pos);
	unsigned inverse(unsigned x,unsigned pos);
	
	unsigned x,pos;//仍要说明 
	
	printf("输入无符号整数x：\n");
	scanf("%u",&x);
	printf("输入位数pos：\n");
	scanf("%u",&pos);
	
	printf("第%u位设为1：%u\n",pos,set(x,pos));
	printf("第%u位设为0：%u\n",pos,reset(x,pos));
	printf("第%u位取反：%u\n",pos,inverse(x,pos));
	
	return 0; 
	
}

unsigned set(unsigned x,unsigned pos)
{
	unsigned i=1;
	
	return (x|i<<pos);
}

unsigned reset(unsigned x,unsigned pos)
{
	unsigned i=1;
	
	return (x&(i<<pos));
}

unsigned inverse(unsigned x,unsigned pos)
{
	unsigned i=1;
	
	return (x^(i<<pos));
}
