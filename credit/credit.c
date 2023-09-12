#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = get_long("Enter your credit card number ");
    int sum = 0;
    int i = 0;
    int first = 0;
    int second = 0;
    while (number > 0)
    {
        int part = number % 10;
        second = first;
        first = part;
        if (i % 2 == 0)
        {
            sum = sum + part;
        }
        else
        {
            part = part * 2;
            sum = sum + part % 10 + part / 10;
        }
        i++;
        number = number / 10;
    }
    if ((sum % 10 != 0))
    {
        printf("INVALID\n");
    }
    else if (i == 13)
    {
        if (first == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (i == 15)
    {
        if (first == 3 && (second == 4 || second == 7))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (i == 16)
    {
        if (first == 4)
        {
            printf("VISA\n");
        }
        else if (first == 5 && (second == 1 || second == 2 || second == 3 || second == 4 || second == 5))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
wget https://cdn.cs50.net/2022/fall/labs/2/scrabble.zip