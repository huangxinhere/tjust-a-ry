#include<stdio.h>
#include<limits.h>//头文件里面已经含CHAR_MIN等的相关信息，不用声明 

int main()
{
	printf("char     : %d~%d\n",   CHAR_MIN,CHAR_MAX);
	printf("short int: %d~%d\n",   SHRT_MIN,SHRT_MAX);
	printf("int      : %d~%d\n",   INT_MIN,INT_MAX);
	printf("long int : %ld~%ld\n",  LONG_MIN,LONG_MAX);
	
	return 0;
 } 
