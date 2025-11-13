#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t[n];
    for(int i = 0;i < n;i++){
        cin>>t[i];
    }
    int m,k;
    cin>>m>>k;
    int sno[m],n_[m],youxiaon_[m];
    for(int j = 0;j < m;j++){
        int counter = 0;
        cin>>sno[j]>>n_[j];    //>>第j + 1个人的学号>>第j + 1个人的完成题数
        int T[n_[j]];  //第j + 1个人做了的题目
        for(int y = 0;y < n_[j];y++){         //不太需要存每个人做的题号，只需要看算不算在记题数里就行了
            cin>>T[y];
            for(int r = 0;r < n;r++){
                if(T[y] == t[r]){
                    counter++;
                    break;                 //找到匹配就退出；
                }
            }
        }
        youxiaon_[j] = counter;     
    }  
     for(int p = 0;p < m - 1;p++){
        for(int w = 0;w < m - p - 1;w++){
            int temp;
            if(youxiaon_[w] < youxiaon_[w + 1] ||
            youxiaon_[w] == youxiaon_[w + 1] && sno[w] > sno[w + 1] ){
                temp = youxiaon_[w];
                youxiaon_[w] = youxiaon_[w + 1];
                youxiaon_[w + 1] = temp;
                temp = sno[w];
                sno[w] = sno[w + 1];
                sno[w + 1] = temp;

                }
            }
        }
        //input
    int counter = 1;
    for(int l = 0;l < m ;l++){
        if(l > 0 && youxiaon_[l] != youxiaon_[l - 1]){
            counter++;
        }
        if(counter > k){
            break;
        }
        cout<<sno[l]<<" ";
    }
    return 0; 
}