#include<stdio.h>
#include<math.h>

int main()
{
    long int i;
	int a,b;
	
	for (i=1;i<=5;i++)//��ȫƽ������c�б����ƽ������ƽ���ض��������� 
	{
		a=i+100;//i+100=a������ lvalue required as left operand of assignment
		if (sqrt(a)*sqrt(a)==a)
		{
			b=i+248;
			if(sqrt(b)*sqrt(b)==b)//�������붼Ϊ�����������&& 
			{
				printf("%ld is what we need\n",i);
			}
		}
	}
 } 
