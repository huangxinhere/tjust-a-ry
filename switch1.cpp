#include<stdio.h>

int main()//���ü����ַ�c=������������char�������Ӹ�ʽ 
{
	int a,b;
	char c;
	printf("input expression:a+-*/b \n ");
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
	case'+':printf("%d\n",a+b);break;
	case'-':printf("%d\n",a-b);break;
	case'*':printf("%d\n",a*b);break;
	case'/':printf("%d\n",a/b);break;
	default:printf("error!/n");break;         
    }
 } //���ʱһ��Ҫ��printf���������Ҫchar��Ȼ����scanf��ӦҲҪд 
