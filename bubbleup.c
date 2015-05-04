#include <stdio.h>
int main(){
	int a[10];
	int i,j,tmp;

	printf("输入数组值：\n");
	for(i=0;i<10;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);

	}

	// testFun();
	for(i=0;i<10;i++){
		for(j=9;j>=i;j--){
			if(a[j-1]>a[j]){
				tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
			}
		}
	}

	printf("排序后的数组值：\n");

	for(i=0;i<10;i++){

		printf("%d ",a[i]);

	}

	printf("\n");

	return 0;
}
int testFun(){
	printf("test the tags function.");
}

