#include<iostream>
#include<string.h>
using namespace std;
char *strstr(const char* str,const char *substr)
{
    const char *s1 = str;
    const char *s2 = substr;
    int lenth2 = 0,lenth1 = 0;
    while(*s2)
    {
        s2++;
        lenth2++;
    }
    s2 = substr;
    while(*s1)
    {
        s1++;
        lenth1++;
    }
    s1 = str;
    int counter = 0;
    for(int i = 0;i <= lenth1 - lenth2; i++)
    {
        int j;
        for(j = 0;j < lenth2;j++)
        {
            if(*(str + i + j) != *(substr + j))
            {
                break;
            }
        }
        if(j == lenth2)
        {
            return (char*)(str + i);
        }
    }
    return NULL;
}
int main()
{
    cout<<strstr("hello world","world");
    return 0;
}