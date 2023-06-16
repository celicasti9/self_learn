#include <stdio.h>
#include <cs50.h>
/* The purpose of this file is to learn how to create my own functions in c*/


//indicating functions will be declared later on
int get_size(void);
void print_grid(int size)

/* Start of code*/
int main(void)
{
    //get size of brick
    int n = get_size();

    //print grid of bricks
    print_grid(n);
}




















int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }

    while (n < 1);
    return n;

}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}