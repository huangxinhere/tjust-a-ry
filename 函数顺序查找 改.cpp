#include<stdio.h>
#define FAILED -1
#define NUM 5//�������������Ԫ�ظ��� 

int search(int key,int a[],int no)//��Ӧ��ò�Ҫ�ظ� 
{
	int i;
	i=0;
	
	while (1)
	{
		if(i==no)	//if(a[i]==key)  return (i); 
		return (FAILED);//else	return (FAILED);
        if (a[i]==key)
        return i;
		i++;//��returnֱ������ѭ��//ԭ����δ�ֵ������� 
	}
}
int main()
{
	int a[NUM];
	int j,ky,m;
	
	for (j=0;j<=NUM;j++)
	{
		printf("a[%d]=",j);
		scanf("%d",&a[j]);//����©& 
		
	 } 
	 scanf("%d",&ky);
	 
	m= search(ky,a,NUM);//���ص�����ֵ������Ҫ��Ū������ 
	 //������������ֻ��a 
	 if (m==-1)
	 {
	 	printf("error\n");
	 }
	 else 
	 {
	 	printf("%d\n",m);
	 }
	 
 } 
