# include<stdio.h>

int main(){
    FILE *ptr;
    int num1;
    int num2;
    int num3;
    ptr = fopen("babu.txt","r");
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    fclose(ptr);
    printf("The value of num is %d\n",num1);
    printf("The value of num is %d\n",num2);
    printf("The value of num is %d\n",num3);
    return 0;
    }