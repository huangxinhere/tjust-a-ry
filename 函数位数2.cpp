#include<stdio.h>

int main()
{
	unsigned set(unsigned x,unsigned pos);
	unsigned reset(unsigned x,unsigned pos);
	unsigned inverse(unsigned x,unsigned pos);
	
	unsigned x,pos;//��Ҫ˵�� 
	
	printf("�����޷�������x��\n");
	scanf("%u",&x);
	printf("����λ��pos��\n");
	scanf("%u",&pos);
	
	printf("��%uλ��Ϊ1��%u\n",pos,set(x,pos));
	printf("��%uλ��Ϊ0��%u\n",pos,reset(x,pos));
	printf("��%uλȡ����%u\n",pos,inverse(x,pos));
	
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
