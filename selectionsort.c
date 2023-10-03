//program to find time and space complexity using selection sort
#include <stdio.h>
void main()
{
    int limit,i,j,temp,min_index,count=0;
    count++;
    printf("Enter the limit:\n");
    scanf("%d",&limit);
    count++;
    int a[limit];
    printf("Enter the elements:\n");
    for(i=0;i<limit;i++)
    	{
    		count++;
    		scanf("%d",&a[i]);
    	}count++;
   for(i=0;i<limit-1;i++)
	{
	    count++;
	    min_index=i;
	    count++;
	    for(j=i+1;j<limit;j++)
		{
			count++;
			if(a[j]<a[min_index])
				{
				   count++;
				   min_index=j;
				   count++;
				}
			count++;
		}
	    count++;
	    temp=a[i];
	    a[i]=a[min_index];
	    a[min_index]=temp;
	    count+=3;
	}count++;
    printf("sorted array:");
    for(i=0;i<limit;i++)
	{
		count++;
		printf("%d ",a[i]);
		count++;
	}count+=3;
    printf("\n");
    printf("Time complexity is %d\n",count);
    printf("Space complexity is %d\n",24+4*limit);
}			            
                                         
