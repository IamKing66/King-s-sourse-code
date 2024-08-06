# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr;
    int n;


    // for calloc
    // printf("Enter the number of int you want: ");
    // scanf("%d",&n);
    // ptr = (int *)calloc(n, sizeof(int));
       
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of element %d\n",i+1);
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value of element %d is %d\n",i+1, ptr[i]);
    // }








    // for malloc
    printf("Enter the number of int you want: ");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
       
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element %d\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n",i+1, ptr[i]);
    }
    return 0;
    }