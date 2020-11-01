#include<stdio.h>

int main()
{
	int a,c;
	do
	{
	   printf("the grade is :\n");
	   scanf("%d",&a);	
	}
	while(a<0||a>100);
	
	if ((a<59)||(a==59))    c=40;
	if ((a>60)||(a==60)&&a<89)    c=2;
	if ((a>90)||(a==90)&&a<100)    c=3;
	
	switch(c)
	{
		case 40:printf("A\n");break;
		case 2:printf("B\n");break;
		case 3:printf("C\n");break;
	 }
}
