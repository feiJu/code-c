#include <stdio.h>

// 声明函数
int swap1(int a,int b);
void swap2(int *a,int *b);

int main(){
	

	int a,b;
	int *p1,*p2;

	printf("please input two num:\n");

	scanf("%d,%d",&a,&b);

	int res_a= swap1(a,b);
	printf("----1.交换后的值为：  %d,%d\n",a,b);

	printf("---- 交换后的返回值a=：%d\n",res_a);


	p1=&a;
	p2=&b;

	swap2(p1,p2);

	printf("----2.交换后的值为：%d,%d\n",*p1,*p2);
	return 0;
}


void swap2(int *p1,int *p2){
	int tmp;
	tmp = *p1;
	*p1=*p2;
	*p2=tmp;
}

int swap1(int a,int b){
	int tmp;
	

	tmp = a;
	a = b;
	b = tmp;

	return a;
}
