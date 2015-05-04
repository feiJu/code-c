#include <stdio.h>

int main(){
	
	int a[5],b[5];
	int i;
	int *p,*q;
	
	p = &a[0];
	q = b;

	printf("please input array a:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("array p is :");

	for(i=0;i<5;i++)
		printf("%3d",*(p+i));

	printf("\nplease input array b:\n");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);
	printf("array q is :");
	for(i=0;i<5;i++)
		printf("%3d",*(q+i));

printf("\n");
	return 0;
}
