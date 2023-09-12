#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int sentance_count(string text)
{
    int sentance_count = 0;
    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            sentance_count++;
        }
        i++;
    }
    return sentance_count;
}
int letter_count(string text)
{
    int letter_count = 0;
    int i = 0;
    while (text[i] != '\0')
    {
        if (toupper(text[i]) >= 65 && toupper(text[i]) <= 90)
        {
            letter_count++;
        }
        i++;
    }
    return letter_count;
}
int word_count(string text)
{
    int word_count = 1;
    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == ' ')
        {
            word_count++;
        }
        i++;
    }
    return word_count;
}
int main(void)
{
    string text = get_string("Text: ");
    float L, S;
    L = ((letter_count(text) / (float) word_count(text)) * 100);
    S = ((sentance_count(text) / (float) word_count(text)) * 100);
    int index = index = 0.0588 * L - 0.296 * S - 15.8 + 0.5;
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 15)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}