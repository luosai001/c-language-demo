#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int *p1, *p2;
	a=100;b=10;
	p1=&a;
	p2=&b;
	printf("%d,%d\n",*p1,*p2);
	int *p;
	if(a>b){
		p=p1;p1=p2,p2=p;
	}
	printf("%d,%d\n",*p1,*p2);
	return 0;
}
