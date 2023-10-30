#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 8;
    for( int i = n ; i > 1 ; i--)
    {
        printf("  ");
    }

    for( int j = 1 ; j < n ; j++)
    {
        for( int k = 1 ; k < n ; k++)
        printf("#");
        printf("  ");
        printf("#");
        printf("\n");
    }


}
