#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 7;
    for( int i = n ; i > 0 ; i--)
    {
        printf("  ");
    }

    for( int j = 1 ; j < 7 ; j++)
    {
        printf("#");
    }
    printf("  ");

    for( int k = 1 ; k < 7 ; k++)
    {
        printf("#");
    }
    printf("\n");


}
