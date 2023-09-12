#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int initial_pop;
    int final_pop;
    int year = 0;
    // TODO: Prompt for start size
    do
    {
        initial_pop = get_int("Enter the initial population\n");
    }
    while (initial_pop < 9);
    // TODO: Prompt for end size
    do
    {
        final_pop = get_int("Enter the final population\n");
    }
    while (final_pop < initial_pop);

    // TODO: Calculate number of years until we reach threshold
    while (initial_pop < final_pop)
    {
        initial_pop = initial_pop + (initial_pop / 3) - (initial_pop / 4);
        year++;
    }
    printf("Years: %i\n", year);
    // TODO: Print number of years
}
