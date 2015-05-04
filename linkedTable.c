#include <stdio.h>

int link_length;	// 表示链表长度

// 声明结构体
struct Student{
	char name[20];	// 学生姓名
	int seno;	// 学号
	struct Student *pNext;	// 指向下一个结点的指针
};

// 声明并实现函数
// 创建链表
struct Student* create(){
	
	struct Student *head = NULL;	// 初始化头指针为空
	struct Student *pEnd,*pNew;		


	pEnd = pNew = (struct Student*)malloc(sizeof(struct Student));	// 初始化尾结点和新结点

	printf("please first input name ,then seno\n");
	scanf("%s",&pNew->name);
	scanf("%d",&pNew->seno);

	link_length = 0;		// 初始化链表长度为0

	while(pNew->seno != 0){	// 序号不为0，进入循环

		link_length++;
		if(link_length == 1){		// 如果为第一个结点
			pNew->pNext = head;	// 第一个结点指向null
			pEnd = pNew;	// 尾结点即为第一个结点
			head = pNew;	// 头指针指向第一个结点
		}else{
			pNew->pNext = NULL;
			pEnd->pNext = pNew;
			pEnd = pNew;
		}

		printf("------------- 再输入一个～_～ -------------------\n");
		pNew = (struct Student*)malloc(sizeof(struct Student));

		scanf("%s",&pNew->name);
		scanf("%d",&pNew->seno);

	}
	free(pNew);		// 释放内存
	return head;
}

// 打印链表
void show(struct Student* pHead){
	
	struct Student *stuTmp;	// 临时变量
	stuTmp = pHead;
	int index = 0;


	while(stuTmp != NULL){
		index++;
		printf("the number is :%d\n",index);
		printf("	name=%s,seno=%d \n",stuTmp->name,stuTmp->seno);
		stuTmp = stuTmp->pNext;
	}
}


// 在链表中插入元素
struct Student* insert(struct Student* head){

	struct Student *pNew;

	printf("------------ 在第一个元素前插入结点 ---------------\n");
	pNew = (struct Student*) malloc(sizeof(struct Student));
	
	
	scanf("%s",&pNew->name);
	scanf("%d",&pNew->seno);

	pNew->pNext = head;
	head = pNew;

	link_length++;
	return head;
}

int main(){

	struct Student *head;

	head = create();

	//show(head);

	head = insert(head);

	show(head);

	return 0;
}
