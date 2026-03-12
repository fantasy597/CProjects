#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> num;
    int n;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin>>x;
        num.push_back(x);
    }
    for(int j = 2; j < num.size();j++)
    {
        cout<<num[j]<<endl;
    }
    return 0;
}