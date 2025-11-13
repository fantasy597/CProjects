#include<iostream>
using namespace std;
int main(){
    int n,k,counter = 0;
    cin>>n>>k;
    int sno[n],snoplus[n] = {0};
    for(int i = 0;i < n;i++){
        cin>>sno[i];
    }
    for(int j = 0;j < n;j++){
        int x;
        x = sno[j];
        int sum = 0;
        while(x > 0){
            sum += x % 10;
            x /= 10;

        }
        if(sum % k == 0){
         counter++;
        snoplus[counter - 1] = sno[j];
        }
    } 
    int temp;
    for(int o = 0;o < n - 1;o++){
        for(int p = 0;p < counter - 1;p++){
            if(snoplus[p] > snoplus[p + 1]){
                temp = snoplus[p];
                snoplus[p] = snoplus[p + 1];
                snoplus[p + 1] = temp;
            }
        }
    }
    cout<<counter<<endl;
    for(int t = 0;t < n;t++){
        if(snoplus[t] == 0){
            break;
        }
        cout<<snoplus[t]<<endl;

    }
    return 0;
}