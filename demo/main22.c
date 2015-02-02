#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	char c;
	if ((fp=fopen("D:\\c\\test.txt", "r")) ==NULL )
	{
		printf("cannot open this file\n");
		exit(0);
	}
	c=fgetc(fp);
	while(c!=EOF){
		putchar(c);
		c=fgetc(fp);
	}
	fclose(fp);
		return 0;
}
