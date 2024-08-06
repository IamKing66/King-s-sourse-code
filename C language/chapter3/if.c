# include<stdio.h>

int main(){
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
   
    printf("Enter b number\n");
    scanf("%d",&b);
    if ((a>b)/*if we add " || " it add alternative option || (a==b)*/)
    {
        printf("a is greater than b");
    }
    else{printf("b is greater than a");}
    
    
    
    // if (a%2==0)
    // {
    //     printf("%d is even \n",a);
    // }
    // else{printf("%d is odd \n",a);
    // }
    
    
    return 0;


    }