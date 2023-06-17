#include <stdio.h>
#include <cs50.h>

//average score in an array

int main(void)
{
    int score[3];
     score[0] = get_int("What was your first score? ");
     score[1] = get_int("What was your second score? ");
     score[2] = get_int("What was your third score? ");

    printf("Average: %f\n", (score[0] + score[1] + score[2]) / (float) 3);

}