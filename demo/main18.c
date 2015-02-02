#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define format "%d\n %s\n%f\n%f\n%f\n"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int num;/*Ñ§ºÅ*/
	char name[20];
	float score[3];
};

int main(int argc, char *argv[]) {
	void print(struct student *p);
	struct student stu;
	stu.num =12345;
	strcpy(stu.name,"li Li");
	stu.score[0]=67.5;
	stu.score[1]=89;
	stu.score[2]=78.6;
	print(&stu);
	return 0;
}

void print(struct student *p){
	printf(format,p->num,p->name,p->score[0],p->score[1],p->score[2]);
	printf("\n");
}


