#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x, y, i, j ,r, check;
    srand(time(NULL));
    x=rand()%10;
    printf("the randomly generated no is %d \n", x);
    printf("Only the kids above or equal to 15 years can play this game \n");
    printf("Enter your Birth Year only \n");
    scanf("%d",&j);
    if(j>1980)
    {
        check = 2025-j;
        if(check>=15)
        {
            printf("Congratulation you can play this game \n");
            printf("you have only 5 attempts to guess the number \n");
            i = 0;
            do
            {
                printf("guess the number which is randomly generated \n");
                scanf("%d", &y);
                if (x < y)
                {
                    printf("your guessed number is greater then generated number \n");
                }
                else if (x > y)
                {
                    printf("your guessed number is smaller then generated number \n");
                }
                else
                {
                    printf("you guessed it right bro \n");
                }
                i++;
            } while (x != y && i < 5);
            if (i < 2)
            {
            printf("Congratulation you guessed it in just 1 attempts \n");
        }
        else if(2<i && i>6)
        {
            
            printf("you guessed it right in %d attempts", i);
        }
        else 
        {
            printf("Sorry attempts are exhauasted !! \n");
        }
    }
    else
    {
        printf("you cannot play this game \n");
    }
    }
    else
    {
        printf("Entered Birth Year is not valid !!");
    }
        return 0;
    }