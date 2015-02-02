#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 4
struct student {
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE]; 
void save();
void load();
int main(int argc, char *argv[]) {
	int i;
	for(i=0;i<SIZE;i++){
		scanf("%s,%d,%d,%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
	}
	save();
	load();
	for(i=0;i<SIZE;i++){
		printf("%-10s,%4d,%4d,%-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	return 0;
}

void save(){
	FILE *fp;
	int i;
	if((fp=fopen("f:/stu_list","wb"))==NULL){
		printf("can not open file\n");
		exit(0);
	}
	for(i=0;i<SIZE;i++){
		if(fwrite(&stud[i],sizeof(struct student),1,fp)!=1) {
			printf("file read error\n");
		}
	}
}
void load(){
	FILE *fp;
	int i;
	if((fp=fopen("f:/stu_list","rb"))==NULL){
		printf("can not open file\n");
		return;
	}
	for(i=0;i<SIZE;i++){
		if(fread(&stud[i],sizeof(struct student),1,fp)!=1){
			if(feof(fp)) return;
			printf("file read error\n");
		}
	}
}










