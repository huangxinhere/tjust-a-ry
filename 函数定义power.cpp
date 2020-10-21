#include<stdio.h>

int main ()
{
	float power(float ,float );
	float a,b,c;
	
	printf("input two numbers:");
	scanf("%f%f",&a,&b);
	
	c=power(a,b);
	printf("%f的%f次方是%f\n",a,b,power(a,b));
 } 
 
 float power(float x,float y)
 {
 	float d;
 	int i;
 	d=x;
 	
 	for (i=1;i<y;i++)
 	{
 		d=d*x;
	 }
 	
 	return d;
  } 
