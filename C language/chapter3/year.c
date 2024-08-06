# include<stdio.h>

int main(){
    int year ;
    printf("Enter your the year\n");
    scanf("%d",&year);
    int total = year%4;
    if (total==0)
    {
        printf("This is leap year");
    }
    else{
          printf("This is not leap year");
    }
    return 0;
    }