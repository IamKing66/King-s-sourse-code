# include<stdio.h>

int main(){
    int income;
    printf("Enter your nominal income-> ");
    scanf("%d",&income);

    if (income<=250000)
    {
        printf("You don't need to pay tax.");
    }
    else if (income>=250000 && income<500000)
    {
        int Tax= (int)(income*5)/100;
        printf("you have to pay %d",Tax);
    }
    else if (income>=500000 && income<1000000)
    {
        int Tax= (income*20)/100;
        printf("you have to pay %d",Tax);
    }
    else if(income>=1000000){
        int Tax= (income*30)/100;
        printf("you have to pay %d",Tax);
    }

















    
    
    return 0;
    }