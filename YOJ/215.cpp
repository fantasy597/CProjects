#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char item[n][100];           //考试的时候写成了 char item[n] 这是个字符串数组！！
    int sl[n],dj[n];
    for(int i = 0;i < n;i++){
        cin>>item[i]>>dj[i]>>sl[i];
    }
    int zj = 0,t = 0;
    for(int j = 0;j < n;j++){
        zj += dj[j]*sl[j]; 
    }
    cout<<zj;
    return 0;
}