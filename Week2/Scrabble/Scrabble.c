#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Score(string Word);

int main()
{
    string word1 = get_string("Player1: ");
    string word2 = get_string("Player2: ");
    if(Score(word1) > Score(word2))
    {
        printf("Player1 Win!\n");
    }
    else if(Score(word1) < Score(word2))
    {
        printf("Player2 Win!\n");
    }
    else
    {
        printf("Tie!");
    }
    return 0;
}

int Score(string Word)
{
    int score = 0,table[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    for(int a=0,len = strlen(Word);a < len;a++)
    {
        score += table[ (tolower(Word[a]) - 'a') ];
    }
    return score;
}