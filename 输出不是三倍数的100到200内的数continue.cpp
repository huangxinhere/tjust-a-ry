#include<stdio.h>

int main()
{
	int i;
	for(i=100;i<=200;i++)
	{
		if(0==i%3);//颠倒写法比较保险，为的是双等号 
		    continue;
	    else
	    printf("%d\n",i);
	}
 } 
