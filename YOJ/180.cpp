#include<iostream>
#include<cmath>
using namespace std;
const double pi = 3.1415926535;
int main(){
    double x,e,sinValue = 0.0,term,cosValue = 0.0,term2;
    cin>>x>>e;
    x = fmod(x,2*pi);          //fmod是浮点数取模
    if(x > pi){
        x -= 2*pi;
    }else if(x < pi){
        x += 2*pi;
    }                          //以上是三角函数将范围限制在【-Π，+Π】
    int i = 1;
    term = x;
    while(abs(sin(x) - sinValue) >= e){
        sinValue += term;
        i++;
        term *= -pow(x,2)/((2*i - 2)*(2*i - 1));      //这个经常忘记写那个(2*i - 2)(2*i - 1)中间“*”
    }
    if(abs(sin(x) - sinValue) < e){
    cout<<sinValue<<endl;
    }
    int j = 1;
    term2 = 1;
    while(abs(cosValue - cos(x)) >= e){
        cosValue += term2;
        j++;
        term2 *= -pow(x,2)/((2*j - 3)*(2*j - 2));
    }
    if(abs(cosValue - cos(x)) < e){
        cout<<cosValue<<endl;
    }
    return 0;
}