#include<stdio.h>
#include<limits.h>//ͷ�ļ������Ѿ���CHAR_MIN�ȵ������Ϣ���������� 

int main()
{
	printf("char     : %d~%d\n",   CHAR_MIN,CHAR_MAX);
	printf("short int: %d~%d\n",   SHRT_MIN,SHRT_MAX);
	printf("int      : %d~%d\n",   INT_MIN,INT_MAX);
	printf("long int : %ld~%ld\n",  LONG_MIN,LONG_MAX);
	
	return 0;
 } 
