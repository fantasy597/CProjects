#include <stdio.h>

void word(char *s)
{
    int zimu[26] = {0};
    int i = 0;
    while(*(s + i) != '\0')
    {
        zimu[*(s + i) - 'a' + 1]++;
        i++;
    }
    int maxn = 1;
    int minn = i;
    for(int j = 1;j <= 26;j++)
    {
        if(zimu[j])
        {
        maxn = maxn > zimu[j] ? maxn : zimu[j];
        minn = minn < zimu[j] ? minn : zimu[j];
        }
    }
    int cha = maxn - minn;
    if(cha == 0 || cha == 1)
    {
        printf("No Answer\n0");
        return;
    }
    for(int m = 2;m * m < cha;m++)
    {
        if(cha % m == 0)
        {
            printf("No Answer\n0");
            return;
        }
    }
    printf("Lucky Word\n%d",cha);
    return;
}
int main(void)
{
    char s[102];
    scanf("%s", s);
    word(s);
    return 0;
}
