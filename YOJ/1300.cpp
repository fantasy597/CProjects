#include<iostream>  //半价
#include<iomanip>
using namespace std;
int main()
{
    float price,money;
    int num;
    cin>>price>>num;
    if(num % 2 == 0)
    {
        money = 0.75 * price * num;
    }
    if(num % 2 != 0)
    {
        money = 0.75 * price * (num - 1) + price;
    }
    cout<<fixed<<setprecision(2)<<money;
}