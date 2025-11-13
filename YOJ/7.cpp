#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    double q=(a+b+c)/2;
    double s=sqrt(q*(q-a)*(q-b)*(q-c));
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;


}