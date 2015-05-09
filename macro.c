#include <stdio.h>

// 带参数的宏定义
#define MIX(a,b) ((a)*(b)+(b))

int main(){
	
	int x=5,y=9;
	printf("x,y:\n");
	printf("%d,%d\n",x,y);
	printf("the min number is :%d\n",MIX(x,y));

	return 0;
}
