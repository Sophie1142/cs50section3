// Write a program selection.c that sorts an array of integers using selection sort.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input
    int n = get_int("How many values? ");
    int values[n];
    for (int i = 0; i < n; i++)
    {
        values[i] = get_int("Value %i: ", i);
    }

    // TODO

    // Print sorted values
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", values[i]);
    }
}