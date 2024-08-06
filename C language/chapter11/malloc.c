# include<stdio.h>
# include<stdlib.h>

int main(){
//     ptr = malloc(6 * 4);


// For integer
//    int *ptr;
//    ptr = (int *)malloc(6 * sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the value of element %d\n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("The value of element %d is %d\n",i+1, ptr[i]);
//     }




// For float
    float *ptr;
    ptr = (float *)malloc(4 * sizeof(float));
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of element %d\n",i+1);
        scanf("%f",&ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of element %d is %f\n",i+1, ptr[i]);
    }
    





    // use of sizeof oprator
    // printf("The size of int in in my laptop is %d\n",sizeof(int));
    // printf("The size of float in in my laptop is %d\n",sizeof(float));
    // printf("The size of char in in my laptop is %d\n",sizeof(char));
    
    return 0;
    }