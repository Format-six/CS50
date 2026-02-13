#include <stdio.h>
#include <cs50.h>

int main()
{
    string name = get_string("Hello,what's your name\n");
    printf("Hello,%s\n",name);
    return 0;
}