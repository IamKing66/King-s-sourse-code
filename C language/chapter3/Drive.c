# include<stdio.h>


int main(){
    int age;
    printf("Enter your age.\n");
    scanf("%d",&age);

    if (age<=18)
    {
        printf("You can't drive a car.\n");
    }
    else if (age>=18,age<=89)
    {
        printf("You can drive a car.");
    }
    else if (age>=90 && age<=100)  /*we can use both " , " and " && " for double condition*/
    {
        printf("You are old and old can't drive.");
    }
    
    else{
        printf("You are a gay.");
    }
    

    
    return 0;
    }