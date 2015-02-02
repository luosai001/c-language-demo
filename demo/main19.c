#include <stdio.h>
#include <stdlib.h>
#include "malloc.h"
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int num;
	float score;
	struct student *next;
};
#define LEN sizeof(struct student)
int n;
struct student * creat(){//创建链表 
	struct student *head;//表头 
	struct student *p1;//新建节点 
	struct student *p2;//表尾节点 
	n=0;//节点数为0 
	head=NULL;//表头节点 
	p1=(struct student *)malloc(LEN);//新建节点 
	p2=p1;//表尾节点p2指向p1 
	scanf("%ld,%f",&p1->num,&p1->score);
	while(p1->num!=0){//假设num=0则输入结束 
		n=n+1;
		if(n==1)head=p1;//第一个新建节点是表头 
		else p2->next=p1;//原节点的下一个节点是新建节点 
		p2=p1;//新建节点为表尾节点
		p1=(struct student *)malloc(LEN);
		scanf("%ld,%f",&p1->num,&p1->score);
	}
	free(p1);//num=0的节点为加入链表，删除其空间 
	p2->next=NULL;//输入结束，下一个节点为空 
	return(head);//返回表头指针 
	
}

void print(struct student *head){//输出链表 
	struct student *p;
	printf("\nNow,These %d records are :\n",n);
	p=head;
	if(p==NULL) return;
	do{
		printf("%ld %5.1f\n",p->num,p->score);
		p=p->next;
	}while(p!=NULL);
} 

struct student * del(struct student *head,long num){//删除链表的一个节点 
	struct student *p1;//指向要删除的节点 
	struct student *p2;//指向p1的前一个节点
	if(head==NULL){
		printf("\n List is NULL\n");
		return (head);
	} 
	p1=head;
	while(num!=p1->num&&p1->next!=NULL){
		p2=p1;
		p1=p1->next;
	}
	if(num==p1->num){
		if(p1==head){
			head=p1->next;
		}else{
			p2->next=p1->next;
		}
		free(p1);
		printf("delete %ld\n",num);
		n=n-1;
	}else{
		printf("%ld is not found\n",num);
	}
	return (head);
} 
struct student * insert(struct student *head,struct student *stud) {
	struct student *p0;//带插入节点
	struct student *p1;//p0插入p1之前p2之后
	struct student *p2;
	p0=stud;
	p1=head;
	if(head==NULL){
		head=p0;
		p0->next=NULL;
	}else{
		while((p0->num>p1->num)&&(p1->next!=NULL)){//查找待插入位置 
			p2=p1;
			p1=p1->next; 
		}
		if(p0->num<=p1->num){
			if(p1==head){
				head=p0;
				p0->next=p1;
			}else{
				p2->next=p0;
				p0->next=p1;
			}
		}else{
			p1->next=p0;
			p0->next=NULL;
		}
	}
	n=n+1;
	return (head);	 
}
int main(int argc, char *argv[]) {
	struct student * head;
	struct student *stu;
	long del_num;
	printf("input records:\n");
	head=creat();//建立链表
	print(head);//输出链表
	printf("\nInput the delete number:") ;
	scanf("%ld",&del_num);
	while(del_num!=0){
		head=del(head,del_num);
		print(head);
		printf("\nInput the delete number:") ;
		scanf("%ld",&del_num);
	}
	printf("\nInput the inserted record:");
	stu=(struct student *)malloc(LEN);
	scanf("%ld,%f",&stu->num,&stu->score);
	while(stu->num!=0){
		head=insert(head,stu);//在链表中插入一个节点stu 
		print(head);//输出链表 
		printf("\nInput the inserted number:");
		stu=(struct student *)malloc(LEN);
		scanf("%ld,%f",&stu->num,&stu->score);
	}
	free(stu);//num=0 的节点，未插入，应释放其空间 
	return 0;
}
