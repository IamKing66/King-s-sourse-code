# include<stdio.h>

int main(){
    float radius;
    

    printf("Enter the value of radius \n");
    scanf("%f", &radius);

    float pi= 3.14285714285714;
     

    float area= pi*radius*radius;
    printf("The area of circle is %f \n", area);
    
    float height;
    printf("Enter the value of height \n");
    scanf("%f", &height);

    printf("The volume of cylinder is\n %f", area*height);
    
    return 0;
    }