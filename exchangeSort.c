#include <stdio.h>

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

	for(i=0;i<10;i++){
		
		for(j=i+1;j<10;j++){
			
			if(a[j]<a[i]){
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}

	printf("\n选择排序后的数组为：");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}

	printf("\n");
	return 0;
}
