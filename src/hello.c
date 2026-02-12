#include <stdio.h>
#include <cs50.h>

void main()
{
    string name = get_char("Hello,what's your name");
    printf("Hello,%s",name);
}
