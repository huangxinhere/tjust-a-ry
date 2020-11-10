#include<stdio.h>

int main()
{
	int scorelevel(int );
	
	int a,b,c,d;

	do
	{
	printf("input a score:");  scanf("%d",&a);
	printf("input b score:");  scanf("%d",&b);
	
	}while((a,b>100)||(a,b<0));
	
	if (scorelevel(a)&&scorelevel(b))   printf("It is pass.\n");
	else printf("It is not pass.\n");
	

 } 
 
 int scorelevel(int n)
 {
 	int m,leap;
 	m=n/10;////////////
 	
 	switch (m)
 	{
 		case 1:
 		case 2:
 		case 3:
 		case 4:
 		case 5:leap=0;break;
 		case 6:
 		case 7:
 		case 8:
 		case 9:
 		case 10:leap=1;break;	
	 }
	 return leap;
 }
