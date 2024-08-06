# include<stdio.h>

int main(){
    int a = 10;
    

    int a,b,c;
    printf("Enter marks of 1st subject: ");
    scanf("%d",&a);
    printf("Enter marks of 2st subject: ");
    scanf("%d",&b);
    printf("Enter marks of 3st subject: ");
    scanf("%d",&c);
    int totalmarks= (a+b+c);

    int total;
    printf("Enter total marks of all three subjects: ");
    scanf("%d",&total);

    float percentage = totalmarks/(float)total*100;
    printf("You obtain %.2f%% in exam.\n",percentage);

    if (percentage>=40 && a>=33 && b>=33 && c>= 33)
    {
        printf("You are pass.");
    }
    else{
        printf("You are fail.");
    }
    
    return 0;
    }