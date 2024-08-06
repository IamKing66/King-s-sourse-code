# include<stdio.h>

int main(){
    FILE *ptr;
    int num1;
    int num2;
    int num3;
    
    ptr = fopen("babu.txt","r"); //--> it will only run when the file name will be correct
    if (ptr == NULL)
    {
       printf("This file does not exist in your system\n");
       return 1;
    }
    else{ 
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    fclose(ptr);
    
    printf("The value of num is %d\n",num1);
    printf("The value of num is %d\n",num2);
    printf("The value of num is %d\n",num3);
    }
    return 0;
    }