#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    cin>>N;
    char stan[4];
    cin>>stan;
    int str[N][20];
    int len = 20;
    for(int j = 0;j < N;j++){
        for(int k = 0;k < len;k++){
            cin>>str[j][k];
            if(str[j][k] == '\n'){
                len = k;
                break;
            }
        }
    }
    //输入完毕
    
}