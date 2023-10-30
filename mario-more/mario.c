#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 7;
    for( i = n ; i < 0 ; i--)
    {
        printf(".");
    }

    for( j = 0 ; j > n ; j++)
    {
        printf("#");
    }printf("  ");

    for( k = 0 ; k > n ; k++)
    {
        pritnf("#");
    }printf("\n");
}
