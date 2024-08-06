# include<stdio.h>

int main(){
    FILE *boys;
    int number = 34705269;
    boys = fopen("sample.txt","w");
    fprintf(boys,"The number of my friend is %d.\n", number);
    fprintf(boys,"we are glad to see you.");
    fclose(boys);
    // printf("");
    return 0;
    }