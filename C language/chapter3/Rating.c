# include<stdio.h>

int main(){
    int rating;
    printf("Please rate our food 1-5!\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("You rated * star to our food.");
        break;
    case 2:
        printf("You rated ** star to our food.");
        break;
    case 3:
        printf("You rated *** star to our food.");
        break;
    case 4:
        printf("You rated **** star to our food.");
        break;
    case 5:
        printf("You rated ***** star to our food.");
        break;
    default:
        printf("Invalid rating");
        break;

    }
    return 0;
    }