#include <stdio.h>
#include <cs50.h>
int main()
{
    int h;
    do
    {
        h = get_int("height: ");
    } 
    while (h < 0);
    for (int a = 1;a < h+1; a++)
    {
        for(int b = h-a;b > 0 ;b--)
        {
            printf(" ");
        }
        for(int c = a;c > 0;c--)
        {
            printf("#");
        }
        printf(" ");
        for(int b = h-a;b > 0 ;b--)
        {
            printf("#");
        }
        for(int c = a;c > 0;c--)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}