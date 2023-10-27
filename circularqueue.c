#include<stdio.h>
int a[50],front=-1,rear=-1,max;
void enqueue();
void dequeue();
void display();
void main()
 {
   int choice;
   printf("Enter the maximum of queue\n");
   scanf("%d",&max);
   do
    {
	printf("Enter the choice\t1)Enqueue\t2)Dequeue\t3)Display\t4)Exit\n");
	scanf("%d",&choice);
	switch(choice)
	 {
	  case 1:
	   {
	    enqueue();
	    break;
	   }
	 case 2:
	  {
	   dequeue();
	   break;
	  }
	case 3:
	 {
	  display();
	  break;
	 }
	case 4:
	 {
	  break;
	 }
	default :
	 {
	  printf("Invalid choice\n");
	 }
	}
     } while(choice!=4);
 }
void enqueue()
 {
   int val;
   
   if(front==(rear+1)%max)
     {
	printf("OVERFLOW\n");
     }
   else if(front==-1&&rear==-1)
     {
	printf("Enter the value to be added\n");
   scanf("%d",&val);
	front=0;
	rear=0;
	a[rear]=val;
     }
   
   else
     {
       printf("Enter the value to be added\n");
   scanf("%d",&val);
       rear=(rear+1)%max;
       a[rear]=val;
     }
 }
void dequeue()
 {
  int item;
  if(front==-1&&rear==-1)
  {
   printf("UNDERFLOW\n");
  }
 else if(front==rear)
  {
   item=a[front];
   printf("The value %d is removed\n",item);
   front=-1;
   rear=-1;
  }
 else
  {
   item=a[front];
   printf("The value %d is removed\n",item);
   front=(front+1)%max;
  }
 }
void display() 
 {
  int i;
  if(front == -1)
  printf("Empty Circular Queue, no elements to display\n");
  else 
   {
    printf("\nElements of queue: ");
    for (i = front; i != rear; i = (i + 1) %max) 
     {
     	printf("%d ", a[i]);
     }
     printf("%d ", a[i]);
     printf("\nFront positions at %d \n", front);
      printf("\nRear positions at %d \n", rear);
   }
  printf("\n");
 }
