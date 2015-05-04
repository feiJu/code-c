#include <stdio.h>

void evaluate(int array[10]);
void show(int array[10]);

int main(){
	
	int arr[10];

	evaluate(arr);		// 给数组赋值
	show(arr);	// 遍历数组
	
	return 0;
}

void evaluate(int array[10]){
	
	int i;
	
	for(i=0;i<10;i++){
		array[i] = i+1;
	}
}

void show(int array[10]){
	
	int i = 0;

	for(i=0;i<10;i++){
		printf("第%d个值为%d \n",i,array[i]);
	}
}
