#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, random, nguesses=1;
    srand(time(0));
    random = rand() % 100 + 1;
    // printf("%d\n", random);


//  do while loop

    // do
    // {
    //     printf("Guess the number\n");
    //     scanf("%d", &guess);
    //     if (guess > random)
    //     {
    //         printf("wrong, The number is lower than your answer.\n");
    //     }
    //     else if (guess < random)
    //     {
    //         printf("wrong, The number is greater than your Answer.\n");
    //     }
    //     else
    //     {
    //         printf("You win at %d attempts.", nguesses);
    //     }
    //     nguesses++;
    // } while (guess != random);



 // while loop

// while (guess != random)
// {
//    printf("Guess the number\n");
//         scanf("%d", &guess);
//         if (guess > random)
//         {
//             printf("wrong, The number is lower than your answer.\n");
//         }
//         else if (guess < random)
//         {
//             printf("wrong, The number is greater than your Answer.\n");
//         }
//         else
//         {
//             printf("You win at %d attempts.", nguesses);
//         }
//         nguesses++;
// }





// for loop

for (int i = guess; guess!=random ; i++)
{
     printf("Guess the number\n");
        scanf("%d", &guess);
        if (guess > random)
        {
            printf("wrong, The number is lower than your answer.\n");
        }
        else if (guess < random)
        {
            printf("wrong, The number is greater than your Answer.\n");
        }
        else
        {
            printf("You win at %d attempts.", nguesses);
        }
        nguesses++;
}

    return 0;
}