#include<stdio.h>

int main()
{
	int i;
	for(i=100;i<=200;i++)
	{
		if(0==i%3);//�ߵ�д���Ƚϱ��գ�Ϊ����˫�Ⱥ� 
		    continue;
	    else
	    printf("%d\n",i);
	}
 } 
