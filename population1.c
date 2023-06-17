#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int s;
    int e;
    int n;

    do
    {
        s = get_int("Starting population size: ");
    }
    while (s < 9);


    // TODO: Prompt for end size

    do
    {
        e = get_int("Ending population size: ");
    }
    while (e < s);


    // TODO: Calculate number of years until we reach threshold

    n = 0;
    while (s < e)
    {
        s = s + (s / 3) - (s / 4);
        n++;
    }


    // TODO: Print number of years

    printf("Years: %i\n", n);


}
