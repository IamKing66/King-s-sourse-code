# include<stdio.h>

int main(){
    int k;
    scanf("%d",&k);
    // while (k<=10)
    // {
    //     printf("This is %d\n",k+1);
    //     k++;
    //     if (k==6)
    //     {
    //         break;
    //     }
        
    // }
     
    // do
    // {
    //      printf("This is %d\n",k+1);
    //     k++;
    //     if (k>=10)
    //     {
    //         break;
    //     }
    // } while (k<=100);

    for (int i= k = 0; i <= 50; i++)
    {
        printf("This is %d\n",i);
         if (i>=30) 
        {
            break;
        }
    }
    
    return 0;
    }