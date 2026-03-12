#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int danyuan = (n - 1) / 12 + 1;
    int floor = ((n - 1) % 12) / 2 + 1;
    int hu = (n - 1) % 2 + 1;
    cout<<danyuan<<"-"<<floor<<0<<hu;
    return 0;
}