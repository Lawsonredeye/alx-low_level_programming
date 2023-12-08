#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * reverse_string - reverses a string
 * @input_string : string to be reversed
 * Return: input_string
 */
char *reverse_string(char *input_string)
{
        char *start = input_string, new_start;
        char *end = input_string + strlen(input_string) - 1;

        while (start < end)
        {
                new_start = *start;
                *start = *end;
                *end = new_start;
                start++;
                end--;
        }
        return (input_string);
}
/**
 * is_palindrome - checks if a number is palindrome
 * @num: number to be check
 * Return: true if a number is palindrome
 */
bool is_palindrome(int num)
{
        char num2[1024];

        sprintf(num2, "%d", num);
        if (strcmp(num2, reverse_string(num2)) == 0)
        {
                return (true);
        }
        return (false);
}
/**
 * main - point of execution
 * Return: success
 */
int main(void)
{
        int i, j;
        int max = 0, product;
        FILE *file;

        for (i = 999; i >= 100; i--)
        {
                for (j = i; j >= 100; j--)
                {
                        product = i * j;
                        if (product < max)
                                break;
                        if (is_palindrome(product) && product > max)
                                max = product;
                }
        }
        file = fopen("102-result", "w");
        if (file != NULL)
        {
                fprintf(file, "%d", max);
                fclose(file);
        }
        return (0);
}
