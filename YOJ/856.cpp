#include <iostream>
using namespace std;
int sum(int x){
    int sum = (x / 10000) % 10 + (x / 1000) % 10
    + (x / 100) % 10 + ( x / 10) % 10 + x % 10 +  x;
    return sum;
}
int f(int x){
    int res;
    for(int j = 1;j < x;j++){
        if(sum(j) == x){
            return j;
        }
    }
    return 0;
}
int main()
{
    int ipt[1000] = {0},len;
    for(int i = 0;i < 1000;i++){
        cin>>ipt[i];
        if(ipt[i] == 0){
            len = i;
            break;
        }
    }
    for(int n = 0;n < len;n++){
        cout<<f(ipt[n])<<endl;
    }
    return 0;
}