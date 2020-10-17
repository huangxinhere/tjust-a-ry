#include<stdio.h>

int main()
{
	int a[3][4]={{10,2,3,44},{5,6,8,10},{55,77,9,1}};//赋值时多少行多少花括号，不可多 
	int i,j;
	int max,row,colum;
	max=a[0][0];
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=3;j++)
		{
			if (a[i][j]>max)
			{
				max=a[i][j];
				row=i;
				colum=j;
			}
		}
	}
	printf("max=%d\nrow=%d\ncolum=%d\n",max,row,colum);
}
