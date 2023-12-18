#include<stdio.h>
#include<stdlib.h>
void main(){
int no1,no2,i,coef1,expo1;
struct node{
int coef,expo;
struct node *link;
}*rhead=NULL,*phead=NULL,*qhead=NULL,*r,*p,*q,*temp;
printf("enter the number of elements in polynomial 1\n");
scanf("%d",&no1);
printf("enter the number of elements in polynomial 2\n");
scanf("%d",&no2);
if(no1!=0)
  printf("enter the elements of 1st poly in decending order\n");
for(i=0;i<no1;i++)
{
   printf("enter the coef of %d term:",i+1);
   scanf("%d",&coef1);
   printf("enter the expo of %d term:",i+1);
   scanf("%d",&expo1);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->coef=coef1;
   temp->expo=expo1;
   temp->link=NULL;
   if(phead==NULL){
     phead=temp;
     p=temp;
    }
  else{
     p->link=temp;
     p=temp;
     }
 }
  if(no2!=0)
    printf("enter the elements of 2nd poly in decending order\n");
for(i=0;i<no2;i++)
{
   printf("enter the coef of %d term:",i+1);
   scanf("%d",&coef1);
   printf("enter the expo of %d term:",i+1);
   scanf("%d",&expo1);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->coef=coef1;
   temp->expo=expo1;
   temp->link=NULL;
   if(qhead==NULL){
     qhead=temp;
     q=temp;
    }
  else{
     q->link=temp;
     q=temp;
     }
 } 
  printf("First polynomial:");
 p=phead;
 while(p!=NULL)
 {
 if(p->link==NULL){
      printf("%dX^%d  ",p->coef,p->expo);
    }
    else{
        printf("%dX^%d + ",p->coef,p->expo);
    }
 p=p->link;
 }
 printf("\n");
  printf("Second polynomial:");
 q=qhead;
 while(q!=NULL)
 {
  if(q->link==NULL){
      printf("%dX^%d  ",q->coef,q->expo);
    }
    else{
        printf("%dX^%d + ",q->coef,q->expo);
    }
 q=q->link;
 }
 printf("\n"); 
p=phead;
q=qhead;
while (p!=NULL && q!=NULL){
    temp=(struct node*)malloc(sizeof(struct node));
    if(p->expo == q->expo){
        temp->coef=p->coef+q->coef;
        temp->expo=p->expo;
        temp->link=NULL;
        p=p->link;
        q=q->link;
    }
    else if(p->expo > q->expo){
        temp->expo=p->expo;
        temp->coef=p->coef;
        temp->link=NULL;
        p=p->link;
    }
    else{
        temp->expo=q->expo;
        temp->coef=q->coef;
        temp->link=NULL;
        q=q->link;
    }
     if(rhead==NULL){
     rhead=temp;
     r=temp;
    }
  else{
     r->link=temp;
     r=temp;
     }
}
while(p!=NULL){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->expo=p->expo;
    temp->coef=p->coef;
    temp->link=NULL;
    p=p->link;
     if(rhead==NULL){
     rhead=temp;
     r=temp;
    }
  else{
     r->link=temp;
     r=temp;
     }
}
while(q!=NULL){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->expo=q->expo;
    temp->coef=q->coef;
    temp->link=NULL;
    q=q->link;
     if(rhead==NULL){
     rhead=temp;
     r=temp;
    }
  else{
     r->link=temp;
     r=temp;
     }
}
 printf("Resultant polynomial:");
 r=rhead;
 i=1;
 while(r!=NULL)
 {
    if(r->link==NULL){
      printf("%dX^%d  ",r->coef,r->expo);
    }
    else{
        printf("%dX^%d + ",r->coef,r->expo);
    }
 r=r->link;
 }
 printf("\n");
}
