#include<stdio.h>
#include<stdbool.h>
void main()
   {
    int n,pos;
    char choice;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    int tree[n+1];
    printf("Enter the elements in the binary tree:\n");
    for (int i=1;i<=n;i++)
       {
        scanf("%d",&tree[i]);
       }
    while(true)
       {
        printf("Enter the position of the node:\n");
        scanf("%d",&pos);
                
        if (pos>=1 && pos<n+1)  
           {
            if (pos==1)   
                printf("This node is the root of tree and has no parent.\n"); 
            else       
                printf("Parent of the node : %d\n",tree[pos/2]);
            
            if (pos*2>n)
               printf("This node has no left child\n");
            else
               printf("Left child of the node : %d\n",tree[pos*2]);
               
            if (pos*2+1>n)
               printf("This node has no right child\n");
            else
               printf("Right child of the node : %d\n",tree[pos*2+1]);    
           }       
        else           
            printf("Invalid Entry\n");
        printf("========================================\n");    
        printf("Do you want to continue?(y/n)\n");
        scanf(" %c",&choice);
        if (choice!='y')
            break;
       }
   }
        
        
