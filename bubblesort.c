//program to find time and space complexity using bubble sort
#include <stdio.h>
void main()
{
    int limit,i,j,temp,count=0;
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
        	for(j=0;j<limit-1-i;j++)
        		{
        		    count++;
        		    if(a[j]>a[j+1])
        		    	{
        		            temp=a[j];
              			    a[j]=a[j+1];
               			    a[j+1]=temp;
               			    count+=4;
               			}count++;
                        }count++;
        }count++;
    printf("The sorted array is:\n");
    for(i=0;i<limit;i++)
    	{  		
    		printf("%d\t\n",a[i]);
    		count++;
    	}count+=3;
    printf("Time complexity is %d\n",count);
    printf("Space complexity is %d\n",20+4*limit);
 }
