#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char string[]="hello world!";
	printf("%s",string);
	int a=sizeof(string);
	printf("%d\n",a); 
	char *str="hello world!";
	printf("%s",str);
	return 0;
}
