#include<stdio.h>

int main()
{
	int f(int x,int y); 
	int i,p;
	
	printf("input a number : ");
	scanf("%d",&i);
	
	p=f(i,++i);//向右吧 
	printf("p=%d\n",p);
	
 }
 
 int f(int x,int y)
 {
 	int c;
 	if (x>y)
 	{
 		c=0;
	 }
	 else if (x==y)//表达等于总是易漏= 
	 {
	 	c=2;
	  }
	  else
	  {
	  	c=1;
	  }
	  return c;
 } 
  
