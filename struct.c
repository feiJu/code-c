#include <stdio.h>

// 声明结构体
struct Product{

	char name[10];	// 产品名称
	char shape[20];	// 产品形状
	char color[10];	// 产品颜色

	int price;	// 产品价格
	char address[100];	// 产品产地
	
};

int main(){

	struct Product p1;
	printf("please input the name of product:\n");
	scanf("%s",&p1.name);
	
	printf("please input the shape of product:\n");
	scanf("%s",&p1.shape);
	
	printf("please input the color of product:\n");
	scanf("%s",&p1.color);	
	
	printf("please input the price of product:\n");
	scanf("%d",&p1.price);

	printf("please input the address of product:\n");
	scanf("%s",&p1.address);

	printf("--------------- show the infos of product------------------\n");


	printf("name:%s\n",p1.name);

	printf("shape:%s\n",p1.shape);

	printf("color:%s\n",p1.color);

	printf("price:%d\n",p1.price);

	printf("address:%s\n",p1.address);

	return 0;
}
