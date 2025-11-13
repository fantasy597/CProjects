#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int price[n];
    for(int i = 0;i < n;i++){
        cin>>price[i];
    }
    int X;
    cin>>X;
    for(int j = 0;j < n - 1;j++){
        for(int k = j + 1;k < n;k++){
            if(price[j] + price[k] == X){
                cout<<j + 1<<" "<<k + 1;
                return 0;
            }
        }
    }
}