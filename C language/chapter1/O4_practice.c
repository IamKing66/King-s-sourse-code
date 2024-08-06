

# include<stdio.h>
int main(){
    int principle;
    int rate;
    int years;


    printf("Enter the value of principle \n");
    scanf("%d", &principle);


    printf("Enter the value of rate \n");
    scanf("%d", &rate);

    printf("Enter the value of years \n");
    scanf("%d", &years);

    int simpleinterest = principle * rate * years / 100;
    printf("The amount of simple interest is  %d \n", simpleinterest);
    
    return 0;
    }