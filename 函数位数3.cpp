#include<stdio.h>

int main()
{
	unsigned set_n(unsigned x,unsigned pos,unsigned n);
	unsigned reset_n(unsigned x,unsigned pos,unsigned n);
	unsigned inverse_n(unsigned x,unsigned pos,unsigned n);
	
	unsigned x,pos,n;//��Ҫ˵�� 
	
	printf("�����޷�������x��\n");
	scanf("%u",&x);
	printf("����λ��pos��\n");
	scanf("%u",&pos);
	printf("����λ��n��\n");
	scanf("%u",&n);
	
	printf("��%uλ��nλ��ʼ��Ϊ1��Ϊ��%u\n",pos,set_n(x,pos,n));
	printf("��%uλ��nλ��ʼ��Ϊ0��Ϊ��%u\n",pos,reset_n(x,pos,n));
	printf("��%uλ��nλ��ʼȡ����Ϊ��%u\n",pos,inverse_n(x,pos,n));
	
	return 0; 
	
}

unsigned set_n(unsigned x,unsigned pos,unsigned n)
{
	unsigned i=1;
	
	for( ;n>0;n--)//��ͼ��⣺1.���Ƕ�Ӧ���ֽ����߼����� 
	{              //          2���λ����Ҫһ���㣬�����������ѭ�� ����һ������
        			//3.��ȥ���Ǹ�����i�ĳ�ֵ��λ����չ 
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
