#include<stdio.h>
#define num//

	int top (void);
	int a[num];//
	
int main()
{
	int i,num;
	extern int a[];

	
	printf("input a num:\n");//
	for (i=1;i<=num;i++)
	{
		printf("%d:",i-1);
		scanf("%d",a[i]);
	}//������� 
	
	printf("��߳ɼ�Ϊ:%d",top()); //������ 
	
	return 0;
 } 
 
 int top(void)//����ֵ��ֱ��д���飿������ 
 {
 	int max,i;
 	extern int a[];//
 	max=a[0];//
 	
 	for(i=1;i<=num;i++)
 	{
 		if(a[i]>max)
 		{
 			max=a[i];
		 }
	 }
	 
	 return max;
  } 
