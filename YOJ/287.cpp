#include<iostream>
using namespace std;
int main(){
    int N,weishu;
    int c[5];
    cin>>N;
    c[3] = N % 10;
    c[2] = ((N - c[3]) % 100) / 10;
    c[1] = ((N - 10*c[2] - c[3]) % 1000) / 100;
    c[0] = (N - 100*c[1] - 10*c[2] - c[3]) / 1000;
    if(N <= 9){
        cout<<N<<','<<1<<endl;
    }else if(N >= 10 && N <= 99){
        cout<<c[3]<<','<<c[2]<<','<<2<<endl;
    }else if(N >= 100 && N <= 999){
        cout<<c[3]<<','<<c[2]<<','<<c[1]<<','<<3<<endl;
    }else if(N >= 1000 && N <= 9999){
        cout<<c[3]<<','<<c[2]<<','<<c[1]<<','<<c[0]<<','<<4<<endl;
    }
    return 0;
}