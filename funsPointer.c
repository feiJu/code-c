#include <stdio.h>

// 声明函数
void evaluate(int* arr);	// 给数组赋值，参数为指针数组，数组长度可变
void show(int* arr);		// 显示数组

int main(){
	
	int iArray[10];

	printf("--------------- 开始给数组赋值 ---------------\n");
	evaluate(iArray);

	printf("--------------- 开始打印数组 ---------------\n");
	show(iArray);

	return 0;
}

void evaluate(int* array){

	int i;

	for(i=0;i<10;i++){
		
		array[i] = i+i;
	}

}

void show(int* array){

	int i;
	for(i=0;i<10;i++){
		printf("第%d个的值为：%d\n",i,array[i]);
	}
	
}


