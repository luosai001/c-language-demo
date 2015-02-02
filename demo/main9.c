#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a;
int main(int argc, char *argv[]) {
	a=3;
	printf("a=%d\n",a);
	extern b;
	b=4;
	printf("b=%d\n",b);
	int c;
	c=add(a,b);
	printf("c=%d\n",c);
	return 0;
}
