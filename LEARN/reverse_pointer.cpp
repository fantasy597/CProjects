#include<iostream>
#include<cstdlib>
using namespace std;
void reverse(char *start,char *end)
{
    while(start < end)
    {
        char w = *start;
        *start++ = *end;
        *end-- = w;
    }
}
int main()
{
    char *str = (char *)malloc(sizeof(char) * 128);
    char ch;
    char *i = str;
    while((ch = getchar()) != '\n')
    {
        *i++ = ch;
    }
    *i = '\0';             //在 C/C++ 中，手动构建字符串时，务必在字符序列的末尾手动添加 \0作为结束标志
    for(char *x = str, *y = i - 1;x < y;x++,y--)
    {
        char p = *x;
        *x = *y;
        *y = p;
    }
    char *start = str;
    char *end = str; 
    cout<<str<<endl;
    while(*end != '\0')
    {
        if(*end != ' ')
        {
            end++;
        }
        else
        {
            reverse(start,end - 1);
            start = end + 1;
            while(*start == ' ')
            start++;
            end = start;
        }
    }
    reverse(start,end - 1);        //最后一个单词是不满足*end != '\0'的，所以并没有进行反转
    *end = '\0';
    cout<<str;
    free(str);
    return 0;
}