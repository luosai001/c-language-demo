#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	fun1();
//	fun2();
//	fun3();
	return 0;
}
//�����±���� 
fun1(){
	int a[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
		for(i=0;i<10;i++){
			printf("%d,",a[i]);
	}
} 

// ���������� 
fun2(){
	int a[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
		for(i=0;i<10;i++){
			printf("%d,",*(a+i));
	}

} 


// ���� ָ�� 
fun3(){
	int a[10];
	int *p,i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
		for(p=a;p<=a+10;p++){
			printf("%d,",*p);
			printf("%d,",p);
			printf("%x,",p);
	}
} 


