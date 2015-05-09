#include <stdio.h>

int main(){
	
	FILE *fp;
	char ch;

	if((fp = fopen("/home/fenghun/code-c/testfile","w")) == NULL){		// 关闭文件
		printf("cannot open file\n");
		exit(0);	// 程序退出
	}

	printf("please input char, reading will end if the char is '#'\n");

	ch = getchar();
	while(ch != '#'){
		fputc(ch,fp);
		ch = getchar();
	}
	fclose(fp);	// 关闭文件
	return 0;
}
