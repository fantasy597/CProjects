#include<iostream>
using namespace std;
int main(){
    int ary[6]={22,34,10,5,89,45};
    int x,temp;
    for(int k = 0;k < 5;k++){
    for(int i = 0;i < 5 - k;i++){                  
        if(ary[i] > ary[i + 1]){
            temp = ary[i];
            ary[i] = ary[i + 1];
            ary[i + 1] = temp; 
        }
    }
}    
    for(int j = 0;j < 6;j++){
        cout<<ary[j]<<" ";
    }
    return 0;
}