#include<stdio.h>

void mat_add(const int v1[2][3],const int v2[3][2],int v3[2][2] )//�������о���ֵ 
{
	int m,n;//v3Ϊ������ûconst 
	
	for(m=0;m<2;m++)
	{
		for(n=0;n<3;n++)
		{
			v3[m][n]=v2[n][m]*v1[m][n];
		}
	}	
 } //ֻ�Ǳ���������У�ֱ����������� 
 
 int main()
 {
 	int a[2][3]={{1,2,3},{4,5,6}};
 	int b[3][2]={{3,4},{8,9},{7,8}};
 	int i,j;
 	int c[2][2];
 	
 	mat_add(a,b,c);//ֻ���������ͺ� 
 	
  	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("c[%d][%d]=%d\n",i,j,c[i][j]);
		}
	}
	
 }
