#include <stdio.h>

// 声明函数
void celerityRun(int i,int j,int array[]);

int main(){
	int i,j,tmp;
	int a[10];

	printf("请输入待排序的数组：\n");
	for(i=0;i<10;i++){

		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	printf("待排序的数组为：");

	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}

	celerityRun(0,9,a);

	printf("\n 快速排序（折半法排序）的结果：");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	
	printf("\n");

	return 0;

}

void celerityRun(int left,int right,int array[]){
	int i,j;
	int middle,tmp;
	i = left;
	j = right;
	middle = array[(left+right)/2];
	do{
	
		while(array[i] < middle && i<right){
			i++;
		}
		while(array[j] > middle && j > left){
			j--;
		}

		if(i<=j){	// 找到了一对
		
			tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;
			i++;
			j--;
		}

	}while(i<=j);


	if(left < j){
		celerityRun(left,j,array);
	}

	if(right > i){
		celerityRun(i,right,array);
	}
}
