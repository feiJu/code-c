#include <stdio.h>

int main(){
	int i,j,tmp,pos;
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
	
	for(i=1;i<10;i++){
		tmp = a[i];
		pos = i-1;
		while(pos>=0 && tmp<a[pos]){
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = tmp;
	}

	printf("\n插入排序的结果：");
	for(i = 0;i < 10;i++){
		printf("%d ",a[i]);
	}

	printf("\n");
	return 0;
}
