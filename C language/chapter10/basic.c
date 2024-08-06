# include<stdio.h>

int main(){
    FILE *moc;
    int num;
    moc = fopen("babu.txt", "r"); //--> for reading file
    // moc = fopen("sample.txt", "w"); //--> for writing file
    fscanf(moc,"%d",&num);
    printf("The value of num is %d",num);
    return 0;
    }