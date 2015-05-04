#include <stdio.h>

int main(){
	
	int a,*p;


	int b;
	
	p = &a;
	printf("Please enter a number:\n");

	scanf("%d",p);

	printf("a =%d\n",a);


	b = *p;


	printf("b==%d\n",b);

	printf("----------------- 这是一道华丽的分割线 ---------------\n");

	int ta;
	int *pointer;

	printf("please enter a number\n");
	scanf("%ld",&ta);

	pointer = &ta;

	printf("the res1 is %ld\n",&*pointer);

	printf("the res2 is %ld\n",*&ta);


	pointer++;
	printf("the add is %ld\n",pointer);


	printf("------------------int byte is %d \n",sizeof(int));
	printf("------------------long byte is %d \n",sizeof(long));


	return 0;

}
