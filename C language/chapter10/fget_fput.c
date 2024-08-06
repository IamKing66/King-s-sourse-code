# include<stdio.h>

int main(){
    FILE *gg;
    gg = fopen("get_put.txt","w");
    putc('c',gg);
    fclose(gg);
    return 0;
    }