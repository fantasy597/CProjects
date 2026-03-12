#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int l = 0,r = 0;
    for(int i = 0;i < str.size();i++)
    {
        if(str[i] == '(')l++;
        if(str[i] == ')')r++;
    }
    if(l == r)cout<<"YES";
    else cout<<"NO";
    return 0;
}