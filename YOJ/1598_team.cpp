#include <iostream>
#include<string.h>
using namespace std;
char a[10005][55];
int main()
{
    int N;
    cin >> N;
    for(int i = 0;i < N;i++)
    {
        cin>>a[i];
    }
    char st[55];
    cin>>st;
    int avl[10005] = {0},v = 0; 
    for(int j = 0;j < N;j++)
    {
        int i = 0,error = 0;
        while(st[i] != '\0')
        {
            if(st[i] != a[j][i])
            {
            error++;
            break;
            }
            i++;
        }
        if(error == 0)
        {
        avl[v] = j;        //v是正确匹配的单词数量，j是对应的字符串数组下标
        v++;
        }
    }
    for(int n = 0;n < v - 1;n++)
    {
        for(int y = 0;y < v - 1 - n;y++)
        {
            if(strcmp(a[avl[y]],a[avl[y + 1]]) > 0)   //注意strcmp返回值是差值的正负，所以会返回>和<以及=，要对符号的方向进行限定
            {
                char temp[55];
                strcpy(temp,a[avl[y]]);
                strcpy(a[avl[y]],a[avl[y + 1]]);
                strcpy(a[avl[y + 1]],temp);
            }
        }
    }
    for(int i = 0;i < v;i++)
    {
        cout<<a[avl[i]]<<endl;
    }
    return 0;
}