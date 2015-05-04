#include <stdio.h>


int main(){
	int a[10];
	int tmp = 0;	
	int pos = 0;
	int i,j;

	printf("输入数组的值：\n");
	for(i=0;i<10;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	// 从小到大排序 
	for(i=0;i<9;i++){
		tmp = a[i];
		pos = i;
		for(j=i+1;j<10;j++){
			if(tmp > a[j]){
				tmp = a[j];
				pos = j;
			}
		}
		a[pos] = a[i];
		a[i] = tmp;
		
	}

	// 输出排序后数组
	printf("排序后的数组：\n");
	for(i=0;i<10;i++){
		printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}
