# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr1;
    int *ptr2;
    // for calloc
    // ptr1 = (int *)calloc(5, sizeof(int));
       
    // for (int i = 0; i < 6000000; i++)
    // {   
    //     ptr2 = (int *)calloc(500000, sizeof(int));
    //     printf("Enter the value of element %d\n",i+1);
    //     scanf("%d",&ptr1[i]);
    //      free(ptr2);
    // }
    // for (int i = 0; i < 6000000; i++)
    // {
    //     printf("The value of element %d is %d\n",i+1, ptr1[i]);
    // }
   



   // for malloc
   ptr1 = (int *)malloc(5* sizeof(int));
       
    for (int i = 0; i < 6000000; i++)
    {   
        ptr2 = (int *)calloc(500000, sizeof(int));
        printf("Enter the value of element %d\n",i+1);
        scanf("%d",&ptr1[i]);
         free(ptr2);
    }
    for (int i = 0; i < 6000000; i++)
    {
        printf("The value of element %d is %d\n",i+1, ptr1[i]);
    }
    return 0;
    }