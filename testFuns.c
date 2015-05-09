#include <stdio.h>
#include <string.h>

// 声明函数
void evaluate(int iArrName[]);		// 数组长度变长的形参 赋值函数
void display(int iArrName[]);		// 显示函数

int main(){
	int iArray[10];

	evaluate(iArray);

	printf("\n");

	display(iArray);

	return 0;
}

/**
 * 给传入的数组赋值
 *
 */ 
void evaluate(int iArrName[]){
	
	int i;
	
	for(i=0;i<10;i++){

		printf("-------i=%d ",i);

		iArrName[i] = i*i;
	}


}

/**
 * 将传入的参数打印出来
 * 
 */ 
void display(int iArrName[]){
	
	int i; 
	int length = sizeof(iArrName);

	printf("---------length=%d \n",length);

	for(i=0;i<10;i++){
	
		printf("第%d个数的值为：%d\n",i,iArrName[i]);
	}

}		// 显示函数
