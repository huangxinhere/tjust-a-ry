#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("input a:");    scanf("%d",&a);
	printf("input b:");    scanf("%d",&b);
	printf("input c:");    scanf("%d",&c);
	
	if((a+b>c)||(a+c>b)||(c+b>a))
	{
		if((a==b)&&(a==c)&&(b==c))//������a==b��==c���� ������ֵ��ȣ�������Ϊ�� 
		{
			printf("�ȱ�������");
		}
		else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
		{
			printf("ֱ��������");
		}
		else 
		{
			printf("����������");	
		}		
	} 
	else
	{
		printf("���������ΰ�!");
				}	

	 
 } 
