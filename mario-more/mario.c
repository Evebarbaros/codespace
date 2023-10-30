#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for( int i = 7 ; i > 0 ; i--)
    {
        printf(".");
    }

    for( int j = 0 ; j > 7 ; j++)
    {
        printf("#");
    }
    printf("  ");

    for( int k = 0 ; k > 7 ; k++)
    {
        printf("#");
    }
    printf("\n");

}
