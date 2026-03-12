#include<iostream>
#include<string>
using namespace std;
string text[500000];
int main()
{
    int n,m;
    string str;
    cin>>n>>str>>m;
    cin.ignore();//除了整行输入，没有什么能读入换行符,就是只要整行读入，除了前面没有输入，就都需要吸收回车
    for(int i = 0;i < n;i++)
    {
        getline(cin,text[i]);  //getline(cin,要读进去的变量)
    }
    if(str == "head")
    {
        for(int i = 0;i < m;i++)
        {
            cout<<text[i]<<endl;
        }
    }
    else
    {
        for(int j = n - m;j < n;j++)
        {
            cout<<text[j]<<endl;
        }
    }
    return 0;
}