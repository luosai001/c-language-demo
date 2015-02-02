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
struct student * creat(){//�������� 
	struct student *head;//��ͷ 
	struct student *p1;//�½��ڵ� 
	struct student *p2;//��β�ڵ� 
	n=0;//�ڵ���Ϊ0 
	head=NULL;//��ͷ�ڵ� 
	p1=(struct student *)malloc(LEN);//�½��ڵ� 
	p2=p1;//��β�ڵ�p2ָ��p1 
	scanf("%ld,%f",&p1->num,&p1->score);
	while(p1->num!=0){//����num=0��������� 
		n=n+1;
		if(n==1)head=p1;//��һ���½��ڵ��Ǳ�ͷ 
		else p2->next=p1;//ԭ�ڵ����һ���ڵ����½��ڵ� 
		p2=p1;//�½��ڵ�Ϊ��β�ڵ�
		p1=(struct student *)malloc(LEN);
		scanf("%ld,%f",&p1->num,&p1->score);
	}
	free(p1);//num=0�Ľڵ�Ϊ��������ɾ����ռ� 
	p2->next=NULL;//�����������һ���ڵ�Ϊ�� 
	return(head);//���ر�ͷָ�� 
	
}

void print(struct student *head){//������� 
	struct student *p;
	printf("\nNow,These %d records are :\n",n);
	p=head;
	if(p==NULL) return;
	do{
		printf("%ld %5.1f\n",p->num,p->score);
		p=p->next;
	}while(p!=NULL);
} 

struct student * del(struct student *head,long num){//ɾ�������һ���ڵ� 
	struct student *p1;//ָ��Ҫɾ���Ľڵ� 
	struct student *p2;//ָ��p1��ǰһ���ڵ�
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
	struct student *p0;//������ڵ�
	struct student *p1;//p0����p1֮ǰp2֮��
	struct student *p2;
	p0=stud;
	p1=head;
	if(head==NULL){
		head=p0;
		p0->next=NULL;
	}else{
		while((p0->num>p1->num)&&(p1->next!=NULL)){//���Ҵ�����λ�� 
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
	head=creat();//��������
	print(head);//�������
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
		head=insert(head,stu);//�������в���һ���ڵ�stu 
		print(head);//������� 
		printf("\nInput the inserted number:");
		stu=(struct student *)malloc(LEN);
		scanf("%ld,%f",&stu->num,&stu->score);
	}
	free(stu);//num=0 �Ľڵ㣬δ���룬Ӧ�ͷ���ռ� 
	return 0;
}
