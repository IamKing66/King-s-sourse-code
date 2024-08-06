# include<stdio.h>

int main(){
    FILE *mmmm;
    mmmm = fopen("sample.txt", "r");
    // char mo=  fgetc(mmmm);
    // printf("The value of my character is %c\n",mo); //--> this for printing one character




// this only for printing character one by one. it only work like this, so comment out char
    printf("The value of my character is %c\n",fgetc(mmmm)); //--> this for printing one character
    printf("The value of my character is %c\n",fgetc(mmmm)); //--> this for printing one character
    printf("The value of my character is %c\n",fgetc(mmmm)); //--> this for printing one character
    printf("The value of my character is %c\n",fgetc(mmmm)); //--> this for printing one character
    printf("The value of my character is %c\n",fgetc(mmmm)); //--> this for printing one character
    printf("The value of my character is %c\n",fgetc(mmmm)); //--> this for printing one character
    printf("The value of my character is %c\n",fgetc(mmmm)); //--> this for printing one character





    // printf("The value of my character is %s\n",mo); //--> this for printing all line
    return 0;
    }