#include "main.h"

int _strlen(char *s)
{
    int count, i;

    for (i = 0; s != NULL; i++)
    {
        count += 1;
    }
    return (count);
}