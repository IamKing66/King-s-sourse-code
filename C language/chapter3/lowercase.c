# include<stdio.h>

int main(){
    char character;
    printf("Enter a word\n"); 
    scanf("%c",&character);

    if (character>=99 && character<=122)
    {
        printf("This is lowercase\n"); 
    }
    else{
        printf("This is uppercase\n"); 
    }
    return 0;
    }