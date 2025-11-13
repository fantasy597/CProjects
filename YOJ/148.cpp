#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,small;
    cin>>n;
    for (c = 8;c <= n;c += 10 ){
        for(b = 1;b <= n/6;b++){
            small = min(b,c);
            if(b == c){
                break;
            }
            if (small %2 != 0){
                small += 1;
            }
            if(b < 10){
                for(a = 10;a < 100;a += 2){}
            }
             for (a = small + 2;a < max(b,c);a+=2){
                if(2*a + 6*b + c > 0.9*n && 2*a + 6*b + c <= n){
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }

            
        }
        }
       
        
    }
    return 0;

}