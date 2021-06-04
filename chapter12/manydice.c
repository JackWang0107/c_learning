#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "diceroll.h"


int main(void){
    int dice, roll;
    int sides;
    int status;

    srand((unsigned int ) time(0));
    printf("Enter the number of sides per die, 0 to quit\n");
    while (scanf("%d", &sides) == 1 && sides > 0){
        printf("How many dices?\n");
        if ((status = scanf("%d", &dice)) != 1){
            if  (status == EOF)
                break;
            else{
                printf("You should have entered an integer.\n");
                printf("Let's begin again.\n");
                while (getchar() != '\n')
                    continue;
            }
        }

        roll = roll_n_dice(dice, sides);
        printf("You have rolled a %d using %d %d-sided dices.\n", roll, dice, sides);
        printf("How many sides? Enter 0 to stop.\n");
    }

    printf("The rollem() function was called %d times.\n", roll_count);
    printf("Good Fortune to you!\n");

    return 0;
}