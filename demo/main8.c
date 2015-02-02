#include "math.h" 
#include "stdio.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,s,area;
	scanf("%f,%f,%f",&a,&b,&c);
	s=1.0/2*(a+b+c);area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%7.2f,b=%7.2f,c=%7.2f\n",a,b,c);
	printf("s=%7.2f,area=%7.2f\n",s,area);
	return 0;
}
