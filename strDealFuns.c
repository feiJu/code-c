#include <stdio.h>
#include <string.h>

// 声明函数
void stroper1();	// 字符串的复制和拼接
void checkUserInfos();	// 字符串的比较

int main(){

	printf("----------- 开始测试字符串的复制和拼接 --------------\n");
	stroper1();

	printf("----------- 开始校验登陆信息，请输入用户名和密码 --------------\n");
	checkUserInfos();


	//printf("----------- 开始校验登陆信息，请输入用户名和密码 --------------\n");

	return 0;
}

void stroper1(){
	char str1[30],str2[30];

	printf("输入目的字符串：\n");
	gets(str1);
	printf("输入源字符串：\n");
	gets(str2);

	printf("输出目的字符串：\n");
	puts(str1);

	printf("输出源字符串：\n");
	puts(str2);

	strcpy(str1,str2);

	printf("----------调用strcpy函数进行字符串复制：-----------\n");

	printf("复制字符串之后的目的字符串：\n");
	puts(str1);


	strcat(str1,str2);
	printf("----------调用strcat函数进行字符串拼接：-----------\n");
	puts(str1);


/**
 *
 *strupr(str1)和strlwr(str1);非c标准库函数，在这里使用不了，需要自己实现。
 */ 
//	printf("----------------- 将拼接后的字符串转为大写 ------------------------\n");
//	strupr(str1);
//	puts(str1);
	

//	printf("----------------- 将大写的字符串转为小写 ------------------------\n");
//  strlwr(str1);
//	puts(str1);
}

// 校验用户登陆信息
void checkUserInfos(){
	
	int i=0;
	char username[20] = {"fenghun"};
	char password[20] = {"123456"};
	char name[20],pwd[20];


	while(i<3){

		printf("输入用户名：\n");
		gets(name);
		printf("输入密码：\n");
		gets(pwd);

		printf("------------- 比较的结果：%d \n",strcmp(username,name));

/**
 * strcmp(str1,str2);	
 * str1 = str2,返回值为0
 * str1 > str2,返回值为正数
 * str1 < str2,返回值为负数
 */

		if(strcmp(username,name)){		// 返回值不为0,  用户名字符串不相等
			
			printf("用户名输入有误，请重新输入用户名和密码：\n");
		
		}else{							// 返回值为0，用户名相等
			if(strcmp(password,pwd)){	// 密码不相等
				printf("密码不相等,请重新输入用户名和密码：\n");
			}else{
				printf("欢迎使用！\n");
				break;
			}
		}
		i++;
		if(i==3){
			printf("输入3次错误，退出系统。");
		}
	}
}
