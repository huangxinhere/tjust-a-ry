#include<stdio.h>

int main()
{
	int  scan_unit();
	int rev_int(int num);
	
	int n1,n2;
	
	n1=scan_unit();
	printf("该整数倒转过来的结果是%d",rev_int(n1));
 } 
 
 int scan_unit(void)
 {
 	int temp;
 	do
 	{
 		printf("输入非负整数");
		scanf("%d",&temp);
		 
 		if(temp<0)
 		{
 			printf("该整数是负数\n");
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
