#include<stdio.h>

int main()
{
	int  scan_unit();
	int rev_int(int num);
	
	int n1,n2;
	
	n1=scan_unit();
	printf("��������ת�����Ľ����%d",rev_int(n1));
 } 
 
 int scan_unit(void)
 {
 	int temp;
 	do
 	{
 		printf("����Ǹ�����");
		scanf("%d",&temp);
		 
 		if(temp<0)
 		{
 			printf("�������Ǹ���\n");
		 }
 		
	 }while(temp<0);
	 
	 return (temp);
 }
 
 int rev_int(int num)
 {
 	int temp;
 	
 	if(num>0)
 	{
 		do
 		{
 		  temp=temp*10+num%10;
 		  num/=10;
		 }while(num>0);
	 }
 	
 	return(temp);
 }
