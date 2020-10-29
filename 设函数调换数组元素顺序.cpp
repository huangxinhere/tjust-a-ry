#include<stdio.h>
#define no 4

 void intary_rcpy(int v1[],int v2[],int n)//no不用再声明 不要重复声明 
 {
 	int i,temp;
 	
 	for (i=0; i<n ;i++)//n/2是整型，数据损失 
 	{ 
 		temp=v2[i];
 		v2[i]=v2[n-i];
 		v2[n-i]=temp;
 		
	 }
	 for (i=0;i<=n;i++)//n的值已经被改变 
	 {
	 	v1[i]=v2[i];
	 }
	 
	 return  ;//数组返回不用加 
  } 
  
int main()
{
	int v1[10],v2[10];
	int i;
	
	printf("five numbers :\n");
	for(i=0;i<=no;i++)
	{
		printf("v2[%d]=",i);
		scanf("%d",&v2[i]);
		
	}
	
	intary_rcpy(v1,v2,no);
	for(i=0;i<=no;i++)
	{
	printf("v1[%d]=%d\n",i,v1[i]);
}
}
