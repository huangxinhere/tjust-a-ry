#include<stdio.h>

int main()
{
	void printstar();//声明printstar函数 
	void print_message();
	
	printstar();//调用printstar函数 
	print_message();//执行布局 
	printstar();
	 
 } 
 
 void printstar()// 具体操作 
 {
 	printf("********\n");
  } 
  
  void print_message()
  {
  	printf("小星星！\n");
  }
