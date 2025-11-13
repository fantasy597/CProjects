#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,n,number = 0;
    cin>>n;
    for(a = 2;a <= n/2;a += 2){
        for(b = 1;b <= n/6;b++){
            if((b < 10 && a >= 10 && a < 100) || b >= 10){
                for(c = 8;c <= n;c += 10){
                    if(a > min(b,c) && a < max(b,c) && a != b && a != c && b != c && 2*a + 6*b + c > 0.9*n && 2*a + 6*b + c <= n){
                        cout<<a<<" "<<b<<" "<<c<<endl;
                        number++;
                    }
                }

            }
        }
    }if(number == 0){
        cout<<"no answer";
    }
    return 0;
}