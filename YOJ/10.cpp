#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double F;
    cin>>F;
    double C=(F-32)*5/9;
    cout<<fixed<<setprecision(2)<<C<<endl;
    return 0;
}