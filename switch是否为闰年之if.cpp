#include<stdio.h>

int main()
{
	int year,leap;//�ɳ����õ��ʻ�������ʾ��ʽ������ 
	printf("input a year: ");//������ע��ע����˼���ڴ󹤳̻�ʱ���ü� 
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)//���ɸѡ��ifǶ�ף������ϵ�ͳһ����else��else if ���ֿ����Բ����Һ�Ϊһ 
		{              //��forǶ�ױȣ����⵽�� 
		     if(year%400==0) 
		    {
		    	leap=1;
			 }     
		} 		
	 } 
	 else
	 {
	 	leap=0;//�ж��Ƿǣ������ 
	 }
	 if(leap)
	 
	 printf("%d is a leap\n",year);
	 else
	 printf("%d is not a leap\n",year);
}
