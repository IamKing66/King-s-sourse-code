// #include <stdio.h>
// int main()
// {
//     int a, b, c, d, e;

//     printf("Enter your Hindi exam's marks: ");
//     scanf("%d", &a);
//     printf("Enter your English exam's marks: ");
//     scanf("%d", &b);
//     printf("Enter your Accountancy exam's marks: ");
//     scanf("%d", &c);
//     printf("Enter your Business studies exam's marks: ");
//     scanf("%d", &d);
//     printf("Enter your Cost & Tax exam's marks: ");
//     scanf("%d", &e);

//     int total, marks = a + b + c + d + e;
//     printf("Enter your exam's total marks: ");
//     scanf("%d", &total);

//     float function = (marks / (float)total) * 100;
//     printf("Your overall percentage is %.2f%%\n", function);
      
//     // int p ;
//     // printf("Enter your percentage");
//     // scanf("%d",&p);
    
//     if (function >= 80 && function <=100)
//     {
//         printf("You grade is A+ in final exam of class 12");
//     }
//     else if (function >= 60 && function <= 79)
//     {
//         printf("You grade is A in final exam of class 12");
//     }
//     else if (function >= 45 && function <= 59)
//     {
//         printf("You grade is B in final exam of class 12");
//     }
//     else if (function >= 30 && function <= 44)
//     {
//         printf("You grade is C in final exam of class 12");
//     }
//     else
//     {
//         printf("You grade is D in final exam of class 12");
//     }
//     return 0;
// }






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