#include <stdio.h>
#include <string.h>

char parseCmd(char *s, char *str1, char *str2)
{
    int i = 0;
    for (i = 2; *(s + i) != ' '; i++)
    {
        *(str1 + i - 2) = *(s + i);
    }
    for (int j = i + 1; *(s + j) != ' '; j++)
    {
        *(str2 + j - i - 1) = *(s + j);
    }
    return *s;
}
int countStr(char *s, char *pStr1)
{
    int counter = 0;
    int lenth1 = strlen(s), lenth2 = strlen(pStr1);
    for (int i = 0; i < lenth1 - lenth2; i++)
    {
        for(int j = 0;j < lenth2;j++)
        {
        if (*(s + i + j) != *(pStr1 + j))
        break;
        }
        counter++;
    }
    return counter;
}

int main()
{
    char s[500], cmdStr[500], str1[500], str2[500], cmd;
    char *pStr1, *pStr2;

    gets(s);
    gets(cmdStr);
    pStr1 = str1;
    pStr2 = str2;

    cmd = parseCmd(cmdStr, pStr1, pStr2);

    switch (cmd)
    {
    case 'C':
        printf("%d\n", countStr(s, pStr1));
        break;
    case 'D':
        deleteStr(s, pStr1);
        printf("%s\n", s);
        break;
    case 'I':
        insertStr(s, pStr1, pStr2);
        printf("%s\n", s);
        break;
    case 'R':
        printf("%s\n", replaceStr(s, pStr1, pStr2));
        break;
    }
    return 0;
}
