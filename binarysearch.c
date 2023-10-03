//program to find time and space complexity using binary search
#include <stdio.h>
void main()
{

    int limit,i,j,temp,check,right,left=0,middle,flag=0,count=0;
    count+=3;
    printf("Enter the limit:\n");
    scanf("%d",&limit);
    count++;
    int a[limit];
    printf("Enter the elements:\n");
    for(i=0;i<limit;i++)
    {
      count+=2;
      scanf("%d",&a[i]);
     }count++;
    for(i=0;i<limit-1;i++)
    {   count++;
        for(j=0;j<limit-1-i;j++)
        {    count++;
            if(a[j]>a[j+1])
            {   count+=4;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }count++;
    }count++;
    printf("The sorted array is :\n");
    for(i=0;i<limit;i++)
    {
     printf("%d\t\n",a[i]);
     count+=2;
    }count++;
   printf("Enter the element to be searched:\n");
   scanf("%d",&check);
   count++;
   //Binary search
   right=limit-1;
   count++;
    while(left<=right)
    {   count++;
        middle=(left+right)/2;
        if(check<a[middle])
        {
            count++;
            right=middle-1;
        }
        else if (check>a[middle])
           {
            left=middle+1;
            count++;
           }
        else
        {   count++;
            printf("The element is present\n");
            flag=1;
            break;
             }}
        count++;
        if(flag==0)
            {
                count++;
                printf("The element is not present\n");
            }
            count+2;
            printf("Time complexity is %d\n",count);
            printf("Space complexity is %d\n",40+4*limit);
           
        }
