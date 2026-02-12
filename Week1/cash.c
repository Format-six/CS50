#include <stdio.h>
#include <cs50.h>

int main()
{
    int o;
    do
    {
        o = get_int("Change owed: ");
    } while ( o <= 0 );
    if(o%25 == 0)
    {
        printf("%d\n",o/25);
    }
    else if (((o%25)%10) == 0)
    {
        printf("%d\n",o/25 + ((o%25)/10) );
    }
    else if (((o%25)%10)%5 == 0)
    {
        printf("%d\n",o/25 + (o%25)/10 + ((o%25)%10)/5);
    }
    else 
    {
        printf("%d\n",o/25 + (o%25)/10 + ((o%25)%10)/5 + ((o%25)%10)%5 );
    }
    return 0;
}