# include<stdio.h>

int main(){
    float cel;

    printf("Enter the celcius\n");
    scanf("%f", &cel);

    float fer= (cel * 9 / 5)+32;
    printf("It's %f degree feranheight. \n", fer);

    float f;

    printf("Enter the feranheight. \n");
    scanf("%f", &f);

    float c= (f-32)*5/9;
    printf("It's %f degree celcius. \n", c);
    
    return 0;
    }