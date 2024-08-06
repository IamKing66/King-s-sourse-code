# include<stdio.h>

int main(){
    // int a = 1;
    // do //this loop exevute the code then checks condition. if it is true it will continue.  
    // {
    //     printf("This is number %d\n",a);
    //     a++;
    // } while (a<=10);
    int a=0,input;
    scanf("%d",&input);
    do
    {
        printf("This is number %d\n",a);
        a++;
    } while (a<=input);

    int a=0;
    
    do
    {
        printf("This is number %d\n",a);
        a++;
    } while (a<     0);
    
    return 0;
    }