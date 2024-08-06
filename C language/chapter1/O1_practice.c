# include<stdio.h>

int main(){
    int length , breadth;
    printf("Enter the lenth of rectangle \n");
    scanf("%d", &length);

    printf("Enter the breadth of rectangle \n");
    scanf("%d", &breadth);
    
    int area= length*breadth;
    printf("The area of this rectangle is %d ", area);
    return 0;
    }