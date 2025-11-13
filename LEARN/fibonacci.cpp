#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    a=1,b=1;
    cin>>n;
    if(n == 1||n == 2){
        c = 1;
    }else{
        for(int i = 3;i <= n;i++){
            c = a + b;
            a = b, b = c;
        }
    
    }
    cout<<c<<endl;
    return 0;
}