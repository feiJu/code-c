#include <stdio.h>

int *computerArea(int width,int height);

int main(){

	int width,height;
	int *area;

	printf("please input the width of rect:\n");
	scanf("%d",&width);

	
	printf("please input the height of rect:\n");
	scanf("%d",&height);

 	area=computerArea(width,height);

	printf("----- 面积为：%d\n",*area);

	return 0;
}


int *computerArea(int w,int h){
	
	int *p;
	int tmp;
	p=&tmp;
	tmp = w*h;
	//*p = w*h;
	return p;
}
