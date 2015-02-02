#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct data{
	unsigned  a:2;
	unsigned  b:3;
	unsigned  c:4;
}; 
int main(int argc, char *argv[]) {
	struct data da;
	da.a=2;
	da.b=1;
	da.c=13;
	printf("%d,%d,%d",da.a,da.b,da.c);
	return 0;
}
