#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp1, *fp2;
	fp1 = fopen("d:/c/c-project/test/file1.c", "r"); /* Դ�ļ� */
	fp2 = fopen("d:/c/c-project/test/file2.c", "w"); /* ���Ƶ�file2.c */
	while(!feof(fp1)) putchar(fgetc(fp1)); /* ��ʾ����Ļ�� */
	rewind(fp1); /* fp �ص���ʼλ�� */
	while(!feof(fp1)) fputc(fgetc(fp1), fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
