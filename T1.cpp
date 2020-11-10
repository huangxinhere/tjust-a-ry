#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("input a:");    scanf("%d",&a);
	printf("input b:");    scanf("%d",&b);
	printf("input c:");    scanf("%d",&c);
	
	if((a+b>c)||(a+c>b)||(c+b>a))
	{
		if((a==b)&&(a==c)&&(b==c))//理解错误（a==b）==c左结合 ，若三值相等，括号内为假 
		{
			printf("等边三角形");
		}
		else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
		{
			printf("直角三角形");
		}
		else 
		{
			printf("任意三角形");	
		}		
	} 
	else
	{
		printf("不是三角形啊!");
				}	

	 
 } 
