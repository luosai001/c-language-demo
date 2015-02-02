#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define p 3.1415926 
#define area(r) p*r*r;
int main(int argc, char *argv[]) {
	double l,s,r,v;
	printf("input redius: ");
	scanf("%lf",&r);
	l=2.0*p*r;
	s=area(r);
	v=4.0/3*p*r*r*r;
	printf("l=%10.4f\ns=%10.4f\nv=%10.4f",l,s,v);
	return 0;
}
