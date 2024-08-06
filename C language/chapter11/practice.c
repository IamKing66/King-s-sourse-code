# include<stdio.h>
# include<stdlib.h>



// question 1
// int main(){
//     int *ptr;
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
//     return 0;
//     }


// question 2
// int main(){
//     int *ptr;
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
//     return 0;
//     }



// question 3
// int main(){
//     int *ptr;
//    ptr = (int *)calloc(6 * sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the value of element %d\n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("The value of element %d is %d\n",i+1, ptr[i]);
//     }
//     return 0;
//     }



// question 4
// int main(){
//     int *ptr;
//    ptr = (int *)malloc(10 * sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the value of element %d\n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value of element %d is %d\n",i+1, ptr[i]);
//     }

//     ptr = realloc(ptr,10*sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the value of element %d\n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("The value of element %d is %d\n",i+1, ptr[i]);
//     }
//     return 0;
//     }





// question 5
// int main(){
//     int *ptr;
//     int tab;
//     ptr = (int *)malloc(15 * sizeof(int));
//     printf("Enter the the number for table\n");
//     scanf("%d",&tab);
    
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d * %d = %d\n",tab,i+1,tab*(i+1));
//     }
//     printf("\n");
//     ptr = realloc(ptr,15*sizeof(int));
//     for (int i = 0; i < 15; i++)
//     {
//         printf("%d * %d = %d\n",tab,i+1,tab*(i+1));
//     }
//     return 0;
//     }




// question 6
// int main(){
//     int *ptr;
//    ptr = (int *)calloc(10 , sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the value of element %d\n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value of element %d is %d\n",i+1, ptr[i]);
//     }

//     ptr = realloc(ptr,10*sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the value of element %d\n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("The value of element %d is %d\n",i+1, ptr[i]);
//     }
//     return 0;
//     }