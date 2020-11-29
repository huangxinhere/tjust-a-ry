#include<stdio.h>
#include<stdlib.h>
    //��׼���� 
int getStandard(int array[],int i,int j){
	int key = array[i];
	
	while (i < j)//Ĭ�ϵĻ�׼�Ǵ���߿�ʼ�����Դ��ұ߿�ʼ�Ƚ� 
	{//����β��Ԫ�ش��ڻ�׼Ԫ��ʱ����һֱ��ǰŲ��jָ�� 
		while (i < j && array[j] >=key){
			j--;
		} 
		
		if (i < j){
			array[i] = array[j];
		}
		//������Ԫ��С�ڵ��ڻ�׼����ʱ����һֱ���Ų��iָ�루���£� 
		while (i < j && array[i] <= key){
			i++;
		}
		
		if(i < j){//���ҵ���array��j�����ֵʱ���Ͱ�ǰ���ֵarray��i�������� 
			array[j] = array[i];
		}	
	}
	
	array[i] = key;//����ѭ��ʱi��j��ȣ���ʱ��i��j����key����ȷ����λ�� 
	return i;//�ѻ�׼���ݸ�����ȷλ�� 
}
 	//��ʼĬ�ϻ�׼Ϊlow 
int QuickSort(int array[],int low,int high){
	
	if (low < high){
		//�ֶ�λ���±� 
		int standard = getStandard(array,low,high);//�ݹ�������� 
		
		QuickSort(array,low,standard - 1);//������� 
		QuickSort(array,standard + 1,high);//�ұ����� 
	}
}

void display(int array[],int size){//�������Ԫ�� 
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
