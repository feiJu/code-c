#include <stdio.h>

struct Student{

	char name[20];	// 姓名
	char sex[20];	// 性别
	int seno;	// 学号
	int grade;	// 年级
}student[5]={
	{"xiaoming1","female",123123,3},
	{"xiaoming2","male",123124,4},
	{"xiaoming3","female",123125,2},
	{"xiaoming4","male",123126,2},
	{"xiaoming5","female",123127,5}
};


int main(){
	struct Student *s;
	int index;
	s = student;
	for(index=0;index<5;index++,s++){
		
		printf("the number is:%d\n",index+1);

		printf("name:%s,sex:%s,seno:%d,grade:%d\n",s->name,s->sex,s->seno,s->grade);
	}
	return 0;
}
