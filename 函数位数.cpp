#include<stdio.h>



	int count_bits(unsigned x)
	{
		unsigned count=0;//Ҫ�ǵø���ֵ 
		while (x&1u)//u��1���� 
		{	
			count=count+1;
		}
		x>>=1;
		return count;
	}
	
	int int_bits(void)
	{
	return	count_bits( ~0u );//Ҫ���ظ�printf����������void�޹� 
	}
	
	void printf_bits(unsigned x)
	{
		int i;//����������Ϊ�գ��޲��� 
		for (i=int_bits()-1;i>=0;i--)
		{
			putchar (((x>>i)&1u)?'1':'0' );//����printf("%d\n",(x&1u)?1:0;);
		 }                                 //����õ�ֵ������ַ� 
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
 
