#include<iostream>
#include<string>
using namespace std;
int priority(char x)
{
    if(x == '(')return 0;
    if(x == '-')return 1;
    if(x == '>')return 2;
    if(x == '|')return 3;
    if(x == '&')return 4;
    if(x == '!')return 5;
    return -1;
}
bool cal(bool a,bool b,char x)
{
    if(x == '!')return !a;
    if(x == '&')return a && b;
    if(x == '|')return a || b;
    if(x == '>')return !a || b;
    if(x == '-')return a && b || !a && !b;
    return false;  //非法输入直接返回false 
}
int main()
{
    int abc[26] = {0};
    string str;
    getline(cin,str);
    for(int i = 0;i < str.size();i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            abc[str[i] - 'a']++;
        }
    }
    for(int i = 0;i < 26;i++)
    {
        if(abc[i] != 0)cout<<char(i + 'a')<<' ';
    }
    cout<<str;
    cout<<endl;
    return 0;
}