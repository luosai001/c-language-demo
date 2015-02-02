#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a,b;
	a=65,b=66;
	printf("a=%c,b=%c\n",a,b);
	printf("a=%d,b=%d\n",a,b); 
	char c1,c2;
	c1='a';c2='b';
	c1=c1-32;c2=c2-32;
	printf("c1=%c,c2=%c\n",c1,c2);
	return 0;
}
