#include <stdio.h>
#define num 5
#define FAILED -1
#define key  8

int search (int a[])
{
	int i;
	for(i=0;i<=num,i++)
	{
	if(a[i]=key)
	{
		printf("%d",i);
	}
	else 
	{
		printf("%d\n",FAILED); 
	}
    }
	return ;//
}

int main()
{
	int a[num]={12,15,2,3,6};
	
	
	search(a[num]);
	
	
	
}
