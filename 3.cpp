#include<stdio.h>

int function (int a,int b,int c)
{	
	return ((a<b?a:b)<c?(a<b?a:b):c);
 } 
 
 int main()
 {
 	int a,b,c;
 	
 	printf("a=");  scanf("%d",&a);
	printf("b=");  scanf("%d",&b);
	printf("c=");  scanf("%d",&c);
	
	printf("min=%d\n",function(a,b,c));
 }
