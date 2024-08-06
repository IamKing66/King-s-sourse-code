# include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter number 1\n");
    scanf("%d",&a);
    printf("Enter number 2\n");
    scanf("%d",&b);
    printf("Enter number 3\n");
    scanf("%d",&c);
    printf("Enter number 4\n");
    scanf("%d",&d);
    int great=a;
if (great<b)
{
    great=b;
}
if (great<c)
{
    great=c;
}
if (great<d)
{
    great=d;
}
printf("%d is great amoung four numbers", great);

    return 0;
    }