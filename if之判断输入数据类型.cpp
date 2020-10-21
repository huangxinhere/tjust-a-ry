#include<stdio.h>

int main()
{
	char c;
	printf("input a number: ");
	c =getchar();
	if(c<32)
	{
		printf("This is a control letter\n");
	}
		else if(c>='0'&&c<='9')
		{
			printf("This is a digt\n");
		}
		else if(c>='A'&&c<='z')
		{
			printf("This is a capital letter\n");
		}	
		else if(c>='a'&&c<='z')
		{
			printf("This is a small character\n");
		}
		else
		{
		    printf("This is an other character\n");
		}
		
		
} 
