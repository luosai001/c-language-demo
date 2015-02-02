#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=3;
	int k=(i++)+(i++)+(i++);
	printf("k=%d\n%d%d",k,i,i++); 
	return 0;
}




