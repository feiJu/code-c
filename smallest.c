// find the minimal between 2 INT Number
#include <stdio.h>
int min(int x,int y);
int main(){
	int num1,num2,min_num;
	printf("Please Input the first Number:\n");
	scanf("%d",&num1);
	printf("Please Input the second Number:\n");
	scanf("%d",&num2);
	min_num = min(num1,num2);
	printf("The minimal one is %d\n",min_num);
}

int min(int a, int b){
	if(a<b){
		return a;	
	}else{
		return b;	
	}
}
