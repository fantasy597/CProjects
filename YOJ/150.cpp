#include<iostream>
using namespace std;
int main(){
    int N = 0,temp = 0;
    cin>>N;
    int sno[1000],score[1000];
    for(int i = 0;i < N;i++){
        cin>>sno[i]>>score[i];
    }
    for(int j = 0;j < N - 1;j++){
        for(int x = 0;x < N - 1 - j;x++){
            if(score[x] < score[x + 1] ||
            score[x] == score[x + 1] && sno[x] > sno[x + 1]){
                temp = score[x];
                score[x] = score[x + 1];
                score[x + 1] = temp;          //对成绩夹带学号排序
                temp = sno[x];
                sno[x] = sno[x + 1];
                sno[x + 1] = temp;
            }
        }

    }
    int rank[N] = {1};
    for(int a = 0;a < N;a++){
        if(score[a] == score[a + 1]){
            rank[a + 1] = rank[a];
        }else{
            rank[a + 1] = a + 2;
        }
        cout<<rank[a]<<" "<<sno[a]<<" "<<score[a]<<endl;
    }
    return 0;
}