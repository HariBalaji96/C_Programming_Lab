#include <stdio.h>

void main() {
    int matchsticks = 21;
    int userPick, compPick;

    while (matchsticks > 1) {
        printf("Matchsticks remaining: %d\n", matchsticks);
        printf("Pick 1-4 matchsticks: ");
        scanf("%d", &userPick);


        if (userPick < 1 || userPick > 4 || userPick > matchsticks) {
            printf("Please choose between 1 to 4 \n");
            continue;
        }

        matchsticks = matchsticks - userPick;

        if (matchsticks == 1) {
            printf("Now only 1 matchstick is left.\n");
            printf("Computer is forced to pick the last one.\n");
            printf("You Win! Computer Loses.\n");
            break;
        }


        compPick = 5 - userPick;

        printf("Computer picks %d matchstick.\n", compPick);

        matchsticks = matchsticks - compPick;

         if (matchsticks == 1) {
            printf("Now only 1 matchstick is left.\n");
            printf("You are forced to pick the last one.\n");
            printf("Computer Wins! You Lose.\n");
            break;
        }

    }

}
