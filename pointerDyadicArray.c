#include <stdio.h>

int main(){
	

	int a[3][5];
	int i,j;

	printf("please input number\n");

	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			scanf("%d",(a[i]+j));
		}
	}

	printf("the dyadicArray is \n");

	for(i=0;i<3;i++){

		for(j=0;j<5;j++){
			printf("%d ",*(a[i]+j));
		}
		printf("\n");
	}

	return 0;

}
