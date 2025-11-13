#include<iostream>
using namespace std;
int main()
{
    int a,b,n,k,m,number = 0;
    cin>>a>>b>>n>>k>>m;
    
    for(int i = a;i <= b;i++){
        int w = 1,weishu = 0;
        while(w <= i){
            w *= 10;
            weishu++;
        }
        if((i - n)%10 == 0 && i % k == 0 && weishu == m){
            number++;
        }
    }
    cout<<number<<endl;
    return 0;


}