#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int s = get_int("Starting population size: ");
    if (s < 9)
    {
        s = get_int("Starting population size: ");

    }
    else
    {
       int e = get_int("Ending population size: ");

        if (e < s)
        {
            e = get_int("Ending population size: ");
        }
        else
        {
            printf("Calculating...\n");
        }

        printf("Years: %i\n", (s + e) / e);

    }

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}
