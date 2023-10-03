//Program to find time and space complexity in Linear search
#include<stdio.h>
void main()
{
 int limit,i,check,flag=0,count=0;
 count+=2;
 printf("Enter the limit\n");
 scanf("%d",&limit);
 count++;
 int a[limit];
printf("Enter the elements\n"); 
for(i=0;i<limit;i++)
	{
		count++;
		scanf("%d",&a[i]);
		count++;
	}
printf("Enter the element to check\n"); 
scanf("%d",&check);
count++;
for(i=0;i<limit;i++)
	{   
	    count++;
            if(a[i]==check)
              {
	 	    flag++;	
		    printf("The element is found\n");
		    count+=2;
	      }
         }
if(flag==0)
	{
 	    count++;
 	    printf("Element not found\n");
 	 }
 count+=2;
 printf("Time complexity is %d\n",count);
 printf("Space complexity is %d\n",20+4*limit);
 }
