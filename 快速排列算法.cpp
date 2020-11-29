#include<stdio.h>
#include<stdlib.h>
    //基准数据 
int getStandard(int array[],int i,int j){
	int key = array[i];
	
	while (i < j)//默认的基准是从左边开始，所以从右边开始比较 
	{//当队尾的元素大于基准元素时，就一直向前挪动j指针 
		while (i < j && array[j] >=key){
			j--;
		} 
		
		if (i < j){
			array[i] = array[j];
		}
		//当队首元素小于等于基准数据时，就一直向后挪动i指针（以下） 
		while (i < j && array[i] <= key){
			i++;
		}
		
		if(i < j){//当找到比array【j】大的值时，就把前面的值array【i】赋给它 
			array[j] = array[i];
		}	
	}
	
	array[i] = key;//跳出循环时i和j相等，此时的i或j就是key的正确索引位置 
	return i;//把基准数据赋给正确位置 
}
 	//开始默认基准为low 
int QuickSort(int array[],int low,int high){
	
	if (low < high){
		//分段位置下标 
		int standard = getStandard(array,low,high);//递归调用排序 
		
		QuickSort(array,low,standard - 1);//左边排序 
		QuickSort(array,standard + 1,high);//右边排序 
	}
}

void display(int array[],int size){//输出数组元素 
	for(int i = 0; i < size; i++){
		printf("%d ",array[i]);	 
		}
		printf("\n");
	} 

int main(){
	int array[] = { 49,38,65,97,13,27,49,10};
	int size = sizeof(array)/ sizeof(int);
	
	printf("%d \n", size);
	QuickSort(array ,0,size - 1);
	display(array, size);
} 
