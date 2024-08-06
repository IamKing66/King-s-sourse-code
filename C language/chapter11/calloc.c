# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of element %d\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of element %d is %d\n",i+1, ptr[i]);
    }
    for (int i = 0; i < 1; i++)
    {
        printf("The value of elements %d, %d, %d, %d, %d, %d.\n",ptr[i], ptr[i]+1, ptr[i]+2,ptr[i]+3,ptr[i]+4,ptr[i]+5);
    }

    return 0;
    }

    