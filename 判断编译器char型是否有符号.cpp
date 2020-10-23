#include<stdio.h>
#include<limits.h>

int main()
{
	printf("此编译器的char型是");
	if (CHAR_MIN) 
	  puts ("有符号");
	else 
	   puts("无符号");
	   
	   return 0; 
 } 
