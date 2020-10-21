#include<stdio.h>

int main ()
{
	int f(int x,int y);
	int a,x,y;
	
	printf("please input a number: \n");
	scanf("%d",&a);
	
	a=f(x,y);
	printf("the result is %d",x);
	
 } 
 
 int f(int x,int y)
 {
 	int b;
 	
 	b*b=x;//教程用了猜测法：估值加一直到平方为输入数为止 
 	
 	return b;
 	
 }
