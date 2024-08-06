// Question 1
// # include<stdio.h>

// int main(){
//     FILE *pon;
//     int dd1,dd2,dd3;
//     pon = fopen("babu.txt", "r");
   
//    fscanf(pon,"%d %d %d",&dd1 &dd2 &dd3);

// fclose(pon);

//     printf("the value of first integer is %d\n.",dd1);
//     printf("the value of second integer is %d\n.",dd2);
//     printf("the value of third integer is %d\n.",dd3);
    
//     return 0;
//     }



 
// Question 2
// # include<stdio.h>

// int main(){
//     FILE *table;
//     int num;
//     printf("Enter the number.",num);
//     scanf("%d",&num);
//     table = fopen("table.txt", "w");
//    for (int i = 0; i < 10; i++)
//    {
//      fprintf(table,"%d X %d = %d\n", num, i+1, num*(i+1));
//    }
//    fclose(table);
//    printf("Alert! = Printed the table succesfully");
//     return 0;
//     }




// Question 3
// # include<stdio.h>

// int main(){
//     FILE *word1;
//     FILE *word2;
//     char wd;
//     word1 = fopen("sample.txt", "r");  
//     word2 = fopen("wordddd.txt", "w");
//     wd = fgetc(word1);
//     while (wd!=EOF)
//     {
//         fputc(wd, word2);
//         fputc(wd, word2);
//         printf("%c",wd);
//         wd = fgetc(word1);
//     }
    
//     fclose(word1);
//     fclose(word2);
//     return 0;
//     }




// Question 4
// # include<stdio.h>
// typedef struct emp
// {
//     char name[20];
//     int salary;
// }work;


// int main(){
//     FILE *data;
//     char wd;
//      work emp[10];
    
//     for (int i = 0; i < 1; i++)
//     {   
       
//         printf("Enter name of %d employee\n",i+1);
//         scanf("%s",emp->name);
//         printf("Enter salary of %d employee\n",i+1);
//         scanf("%d",emp->salary);
//     }

//      data = fopen("informatidon.txt", "w");
//     if (data == NULL)
//     {
//        printf("Eror opening file\n");
//        return 1;
//     }
//     fprintf(data, "%s\n", emp->name);
//     fprintf(data, "%d\n", emp->salary);
//     fclose(data);
    
//     return 0;
//     }


// # include<stdio.h>
// # include<string.h>

// typedef struct emp
// {
//     char name[20];
//     int salary;
// }work;


// int main(){
//     FILE *data;
//     int num = 2;
//      work emp[num];
//      data = fopen("bbbbbbb.txt", "w");
//     for (int i = 0; i < num; i++)
//     {   
       
//         printf("Enter name of %d employee\n",i+1);
//         scanf("%s",emp[i].name);
       
//         printf("Enter salary of %d employee\n",i+1);
//         scanf("%d",emp[i].salary);
//     }

    
//     for (int i = 0; i < num; i++)
//     {
//     fprintf(data, "%s\n", emp[i].name);
//     fprintf(data, "%d\n", emp[i].salary);
//     }
    
   
//     fclose(data);
    
//     return 0;
//     }




# include<stdio.h>
# include<ctype.h>

int main(){
    FILE *word1;
    FILE *word2;
    int wd;
    word1 = fopen("babu.txt", "r");  
    word2 = fopen("word222.txt", "w");
    
    // wd = fgetc(word1);
    // while (wd!=EOF)
    // {
    //     fputc(wd, word2);
        
    //     printf("%c",wd);
    //     wd = fgetc(word1);
    // }
    while ((wd = fgetc(word1))!=EOF)
    {
        if (isdigit(wd))
        {
            wd = wd *2;
            
        }
        fprintf(word2,"%d",wd);
    }
    
    
    fclose(word1);
    fclose(word2);
    return 0;
    }







