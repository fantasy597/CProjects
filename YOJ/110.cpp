#include<iostream>
using namespace std;
int main(){
    char s[1005];
    cin>>s;
    int strat,m ,fault = 0;
    for(int i = 0;i <= 1005;i++){
        if (s[i] == '\0'){
            m = i;
            break;
        }
    }
    for(int k = 0;k <= (m - 1)/2 - 1;k++){
        if(s[k] != s[m -1  - k]){
            fault++;
        }
    }
    if(fault == 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}