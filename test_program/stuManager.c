#include<stdio.h>


// 函数声明
void menu();
void input();
void search();
void delete();
void modify();
void insert();
void order();
void total();


int main(){

	int n;
	menu();
	printf("Please enter a number:");
	scanf("%d",&n);

	while(n){

		switch(n){
			case 1:
				input();		// 
				break;	
			case 2:
				search();
				break;
			case 3:
				delete();
				break;
			case 4:
				modify();
				break;	
			case 5:
				insert();
				break;
			case 6:
				order();
				break;
			case 7:
				total();
				break;
			default:
				printf("-----------infos:%d is a error number.The number is 0---7.",n);
				break;
		}
		getchar();
		menu();
		printf("Please enter a number:");
		scanf("%d",&n);
	}
	return 0;
}

/**
 * 菜单功能实现
 */
void menu(){

	//system("cls");
	printf("\n\n\n");
	printf("\t\t--------------- Welcome To Use Student Manager -----------------------\n");
	printf("\t\t\t|------------------ 0.exit --------------------------|\n");
	printf("\t\t\t|------------------ 1.input record ------------------|\n");
	printf("\t\t\t|------------------ 2.search record -----------------|\n");
	printf("\t\t\t|------------------ 3.delete record -----------------|\n");
	printf("\t\t\t|------------------ 4.modify record -----------------|\n");
	printf("\t\t\t|------------------ 5.insert record -----------------|\n");
	printf("\t\t\t|------------------ 6.order -------------------------|\n");
	printf("\t\t\t|------------------ 7.number ------------------------|\n");	
	printf("\t\t------------ Please Choose A Number Between 0 and 7 ------------------\n");
	printf("\n\n\n");
}

void input(){
	printf("--------infos: input() is called!");
}
void search(){
	printf("--------infos: search() is called!");
}
void delete(){
	printf("--------infos: delete() is called!");
}
void modify(){
	printf("--------infos: modify() is called!");
}
void insert(){
	printf("--------infos: insert() is called!");
}
void order(){
	printf("-----------infos: order() is called!");
}
void total(){
	printf("------------infos: total() is called!");
}

