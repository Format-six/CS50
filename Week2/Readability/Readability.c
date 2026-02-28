#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main()
{
    //获取文本
    string text1 = get_string("text:");

    //对 总字母数，总单词数，总句子数 计数
    int letters = count_letters(text1);
    int words = count_words(text1);
    int sentences = count_sentences(text1);

    //计算 L（每百单词平均字母数） S（每百单词平均句子数）
    float L = (float)letters / ((float)words * 100.0);
    float S = (float)sentences / ((float)words * 100.0);

    //计算可读性等级,并且四舍五入
    double index = (0.0588 * L) - (0.296 * S) - 15.8;
    int grade = round(index);
    if (grade >= 16)
    {
        printf("grade 16+");
    }
    else if(grade >= 1 && grade < 16)
    {
        printf("grade %d\n",grade);
    }
    else
    {
        printf("Before Grade 1");
    }

    return 0;
}

int count_letters(string text)
{
    int num_letters = 0;
    for (int i = 0,n = strlen(text); i < n ; i++)
    {
        //当字符串中字符为字母时，计数器加1
        if((tolower(text[i]) >= 'a') && (tolower(text[i]) <= 'z'))
        {
            num_letters++;
        }
    }
    return num_letters;
}

int count_words(string text)
{
    int num_words = 0;
    //从第二个字母开始遍历
    for (int i = 1,n = strlen(text); i < n ; i++)
    {
        //当 当前字符为空格逗号句号感叹号或问号 且 前一字符为字母时，计数器加一
        if ( ( (text[i] == ' ') || (text[i] == ',') || (text[i] == '.') || (text[i] == '!') || (text[i] == '?') ) && ((tolower(text[i-1]) >= 'a') && (tolower(text[i-1]) <= 'z')))
        {
            num_words++;
        }
    }
    return num_words;
}

int count_sentences(string text)
{
    int num_sentences = 0;
    //从第二个字母开始遍历
    for (int i = 1,n = strlen(text); i < n ; i++)
    {
        //当 当前字符为句号感叹号或问号，计数器加一
        if ( ( (text[i] == '.') || (text[i] == '!') || (text[i] == '?') ) )
        {
            num_sentences++;
        }
    }
    return num_sentences;
}
