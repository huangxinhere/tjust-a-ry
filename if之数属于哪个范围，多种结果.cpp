#include<stdio.h>

int main()
{
	int score;
	printf("input a number: ");
	scanf("%d",&score);
	if (score>60)
	{
		printf("The score is E!\n");
	}
	else if((score >60||score==60)&&score<70)
	{
		printf("D\n");
	}
	else if((score>70||score==70)&&score<80)//�룺������Ϊ�棻�� ��ֻҪһ��Ϊ�桪��ֻҪ��������һ������ͬʱ���� 
	{
		printf("C\n");
	 } 
	 else if((score>80||score==80)&&score<90)
	 {
	 	printf("B\n"); 
	 }
	 else
	 {
	 	printf("A\n");
	 }
}
//Ϊʲô�������A? --�߼����д���
/*else ���治Ҫ�����ţ������ִ��*/ 
