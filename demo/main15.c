#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23} ;
	int *p;
		for(p=a[0];p<a[0]+12;p++){
			if((p-a[0])%4==0){
				printf("\n");
			}
		//	printf("%4d,",*p);
			printf("addr=%o,value=%d\n",p,*p);
		}
		fun1();
	return 0;
}
int fun1(){
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23} ;
	int (*p)[4], i,j ;
		scanf("%d,%d",&i,&j);
		p=a;
		printf("a[%d,%d]=%d\n",i,j,*(*(p+i)+j));
	return 0;
}
