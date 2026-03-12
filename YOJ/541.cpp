#include<stdio.h>
#include<string.h>
#include<cstring>
char parseCmd(char *s, char *str1, char *str2)
{
    int i = 0;
    for (i = 2; *(s + i) != ' '; i++)
    {
        *(str1 + i - 2) = *(s + i);
    }
    *(str1 + i - 2) = '\0';
    int j = 0;
    for (j = i + 1; *(s + j) != '\0'; j++)
    {
        *(str2 + j - i - 1) = *(s + j);
    }
    *(str2 + j - i - 1) = '\0';
    return *s;
}
int countStr(char *s, char *pStr1)
{
    int counter = 0;
    int lenth1 = strlen(s), lenth2 = strlen(pStr1);
    for (int i = 0; i <= lenth1 - lenth2; i++)
    {
        int error = 0;
        for (int j = 0; j < lenth2; j++)
        {
            if (*(s + i + j) != *(pStr1 + j))
            { // 以后不准不加大括号！！！！
                error++;
                break;
            }
        }
        if (error == 0)
            counter++;
    }
    return counter;
}
void deleteStr(char *s,char *pStr1)
{
    int i = 0;
    char *p = strstr(s,pStr1);
    int lenth1 = strlen(s),lenth2 = strlen(pStr1);
    while(*(p + lenth2 + i) != '\0')
    {
        *(p + i) = *(p + lenth2 + i);
        i++;
    }
    *(p + i) = '\0';
}
void insertStr(char *s,char *pstr1,char *pstr2)
{
    char *p = NULL;
    p = strstr(s,pstr1);
    int lenth2 = strlen(pstr2);
    int n = countStr(s,pstr1);
    for(int j = 1;j <= n - 1;j++)
    {
        p = strstr(p + 1,pstr1);
    }
    int i = 0, restlenth = strlen(p);
    for(int j = restlenth - 1;j >= 0;j--)
    {
        *(p + j + lenth2) = *(p + j);
    }
    for(int i = 0;i < lenth2;i++)
    {
        *(p + i) = *(pstr2 + i);
    }
}
void change(char *p,char *pstr1,char *pstr2)
{
    int lenth1 = strlen(pstr1),lenth2 = strlen(pstr2);
    char *rest = p + lenth1;
    strcat(pstr2,rest);
    int lenth = strlen(pstr2);
    int q = 0;
    for(int q = 0;q < lenth;q++)
    {
        *(p + q) = *(pstr2 + q);
    }
}

char *replaceStr(char *s,char *pstr1,char *pstr2)
{
    char temp[500];
    strcpy(temp,s);
    int n = countStr(s,pstr1);
    int lenth2 = strlen(pstr2);
    char *p = strstr(s,pstr1);
    //change(p,pstr1,pstr2);
    strcpy(p,pstr2);
    //strcat(p + lenth2,)
    for(int i = 2;i <= n;i++)
    {
        p = strstr(p + lenth2,pstr1);
    }
    return s;
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

    switch ( cmd )
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
