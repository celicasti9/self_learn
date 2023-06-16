#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char answer = get_char("Are you 21 or older?\nType n for no and y for yes\n");
    if (answer == 'y' || answer == 'Y')
    {
        int age = get_int("What's your age? ");
        if (age < 21) 
    {
        printf("Sorry, you're not old enough!\n");
    } 
    else if (age >= 21 && age < 60)
    {
        printf("You are %i years old, drink safely!\n", age);
    }
    else
    {
        printf("You're too old to drink!\n");
    }

    }
    else
    {
        printf("Sorry, come back when you're older!\n");
    }
    return 0;
}
