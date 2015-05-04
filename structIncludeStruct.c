#include <stdio.h>


// 声明结构体
struct Birthday{
	int year;		// 年
	int month;	// 月
	int day;	// 日
};


struct Student{
	char name[20];	// 姓名
	char sex[10];	// 性别
	struct Birthday birthday;	// 生日
}student={"xiaoming","female",{2014,3,5}};


int main(){

	struct Student *s;
	s = &student;

	printf("name:%s \n",s->name);

	printf("sex:%s \n",s->sex);

	printf("birthday:%d-%d-%d\n",s->birthday.year,s->birthday.month,s->birthday.day);

	return 0;
}

