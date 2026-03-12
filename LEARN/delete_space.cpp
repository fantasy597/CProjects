#include <iostream>
using namespace std;
void delete_space(char *write)
{
    char *read = write;
    while(*read != '\0')
    {
        if(*read != ' ')
        {
            *write++ = *read++;
        }
        else
        read++;
    }
    *write = '\0';
}
int main()
{
    char *p = NULL;
    p = (char *)malloc(100);
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        *(p + i++) = ch;
    }
    *(p + i) = '\0';
    delete_space(p);
    cout<<p;
    return 0;
}