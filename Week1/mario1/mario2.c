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
        for(int b = 1;b < (2*h + 2) ;b++)
        {
            if( ( (b > (h-a)) && (b <= (h+a+1)) ) && (b != (h+1)) )
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}