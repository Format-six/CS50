#include <stdio.h>
#include <cs50.h>

int div_number(long Number,int digital[]);
bool verify(int digital[],int length);

int main()
{
    long Number;
    int digital[16],length;
    do 
    {
        Number = get_long("Number: ");

    }while (Number < 1000000000000);

    length = div_number(Number,digital);
    if(verify(digital,length))
    {
        printf("VISA");
    }
    else
    {
        printf("INVALID");
    }
    return 0;
}

int div_number(long Number,int digital[])
{
    int length = 0;
    while (Number > 0)
    {
        digital[length] = Number % 10;
        Number /=10;
        length++;
    }
    return length;
}

bool verify(int digital[],int length)
{
    int sum = 0;
    for(int a = 1;a < length;a += 2)
    {
        if (digital[a]*2 < 10)
        {
            sum += digital[a] * 2;
        }
        else
        {
            sum += ((digital[a]*2) %10 + 1);
        }
    }
    for(int a = 0;a < length;a += 2)
    {
        sum += digital[a];
    }
    if (sum%10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
