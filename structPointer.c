#include <stdio.h>
#include <string.h>

// 声明结构体
struct Student{

	char name[20];	// 姓名
	char sex[10];	// 性别
	int seno;	// 学号

	int grade;	// 年级
}student;

int main(){

	struct Student *s;

	s = &student;

	strcpy(s->name,"xiao ming");

	strcpy(s->sex,"male");

	s->seno = 12321321;

	s->grade = 3;

	printf("------------- show the infos of student ---------------\n");

	printf("name:%s\n",s->name);
	printf("sex:%s\n",s->sex);
	printf("seno:%d\n",s->seno);
	printf("grade:%d\n",s->grade);

	return 0;
}



