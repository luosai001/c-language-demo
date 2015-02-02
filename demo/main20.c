#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
union data{
	int a;
	float b;
	char c[10];
}; 
int main(int argc, char *argv[]) {
	union data d;
	scanf("%d",&d.a);
	printf("data.a=%d\n",d.a);
	scanf("%f",&d.b);
	printf("data.b=%f\n",d.b);
	scanf("%s",&d.c);
	printf("data.c=%s\n",d.c);
	return 0;
}
