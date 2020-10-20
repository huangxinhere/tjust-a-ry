#include<stdio.h>

int main ()
{
	float add(float ,float );
	float a,b,c;
	
	printf("input two numbers:");
	scanf("%f%f",&a,&b);
	
	c=add(a,b);
	printf("The total is %f\n",c);
 } 
 
 int add(float x,float y)
 {
 	float d;
 	d=x+y;
 	return d;
  } 
