#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	char ch;
	char filename[10];
	printf("Input filename\n");
	scanf("%s\n", filename); /* 从键盘输入文件名 */
	if ((fp = fopen(filename, "a"))==NULL) /* 打开文件 */
	{
		printf("can not open file %s\n", filename);
		exit(0);
	}
	ch = getchar();
	while(ch != '#') /* 从键盘读入字符直到#为止 */
	{
		fputc(ch,fp);
		//putchar(ch);
		ch = getchar();
	}
	fclose(fp);
		fp = fopen(filename, "r");
		if (fp == NULL)
	{
		printf("can not open test\n");
		exit(0);
	}
	ch = fgetc(fp);
	while(ch != EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp); /* 关闭文件 */
	
	return 0;
}
