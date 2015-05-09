#include <stdio.h>

int main(){
	FILE *fp;

	char ch;

	if((fp = fopen("/home/fenghun/code-c/testfile","r"))== NULL){
		printf("cannot open file\n");
		exit(0);
	}

	ch = fgetc(fp);		// 读取字符
	while(ch != EOF){

		putchar(ch);	// 输出字符
		ch = fgetc(fp);		// 读取字符
		
	}
	fclose(fp);
	return 0;
}
