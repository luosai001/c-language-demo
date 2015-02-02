#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d,%d",&a,&b) ;
	c=max(a,b);
	printf("%d\n",c);
	return 0;
}

int max(x,y)
	int x,y;
	{
	int z;
	if(x>y){
		return z=x;
	}else{
		return z=y;
	} 
}





