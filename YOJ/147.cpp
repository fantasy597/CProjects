#include<iostream>
using namespace std;
int main(){
    int array[8] = {120,40,85,50,100,140,70,100};
    int a,b,c,d,z = 0;
    cin>>a>>b>>c>>d;
    for(int i = 0;i <= 7;i++){
        for(int j = 0;j <= 7;j++){
            if(i == j){continue;}                    //学习这种排除相等的情况
            for(int k = 0;k <= 7;k++){
                if(i == k || j == k){continue;}
                for(int l = 0;l <= 7;l++){
                    if(i == l || j == l || k == l){continue;}
                    if(a <= array[i] && b <= array[j] && c <= array[k] && d <= array[l]){
                        cout<<i+1<<" "<<j+1<<" "<<k+1<<" "<<l+1<<endl;
                        z++;    
                    }

                }   
            }
        }
    }
    if(z == 0){
        cout<<-1<<endl;
    }
    return 0;
}    