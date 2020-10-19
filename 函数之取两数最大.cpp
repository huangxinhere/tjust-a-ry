#include<stdio.h>

int main()
{
	int max(int x,int y);//对max函数的声明 ；形参 
	int a,b,c;
	
	scanf("%d%d",&a,&b);
	c=max(a,b);//实参 
	printf("Max is %d\n",max);
 } 
 
 int max(int x,int y)
 {
 	int z;
 	z=x>y?x:y;
 	
 	return z;
  } 
