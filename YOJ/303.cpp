#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    float price,money;
    int num;
    cin>>price>>num;
    if(num == 1){
        money = price * num;
    }
    if(num == 2){
        money = 0.8 * price * num;
    }
    if(num >= 3 && num <= 5){
        money =  0.7 * price * num;
    }
    if(num >= 6){
        money =  3.5 * price + 1.1 * price * (num - 5);
    }
    cout<<fixed<<setprecision(2)<<money;
    return 0;
}