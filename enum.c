#include <stdio.h>


enum Color{Red=1,Blue,Green}color;
int main(){
	
	int iColor;
	printf("please input 1,2 or 3\n ");
	scanf("%d",&iColor);

	switch(iColor){
		case Red:
			printf("the choice is Red.\n");
			break;
		case Blue:
			printf("the choice is Blue.\n");
			break;
		case Green:
			printf("the choice is Green.\n");
			break;
		default:
			printf("input err!");
			break;
	}
	return 0;
}
