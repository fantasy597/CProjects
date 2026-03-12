#include <iostream>
using namespace std;
char *strstr(const char *str, const char *substr)
{
    for (int i = 0;; i++)
    {
        const char *s1 = str + i;
        const char *s2 = substr;
        while(*s1 && *s2 && *s1 == *s2)
        {
            s1++;
            s2++;
        }
        if(*s2 == '\0')
        return (char*)(str + i);
        if(*s1 == '\0')
        return NULL;
    }
}
int main()
{
    cout<<strstr("hello world","w");
    return 0;
}