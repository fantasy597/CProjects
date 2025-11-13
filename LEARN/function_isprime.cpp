#include<iostream>
#include<cmath>
using namespace std;
int isprime(int af)
    {
        for(int i = 2;i <= pow(af,0.5);i++){
            if(af % i == 0){
                return 0;
            }
        }
        return 1;
    }
int main(){
    int a;
    cin>>a;
    if(isprime(a)){
        cout<<a<<" is a prime";
    }else{
        cout<<a<<" isn't a prime";
    }
    return 0;
}