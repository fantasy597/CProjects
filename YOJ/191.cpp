#include<iostream>
using namespace std;
int main(){
    int N,M,temp;
    cin>>N>>M;
    int value[M];
    for(int i = 0;i < M;i++){
        cin>>value[i];
    }
    int sno[N];                                  //一遍过！
    int score[N][M];
    for(int y = 0;y < N;y++){
        cin>>sno[y];
        for(int o = 0;o < M;o++){
            cin>>score[y][o];
        }
    }
    //输入
    int gpa[N];
    for(int j = 0;j < N;j++){
        int sum = 0;
        for(int a = 0;a < M;a++){
            if(score[j][a] >= 60){
                sum += value[a];
            }
        }
        gpa[j] = sum;
    }
    for(int p = 0;p < N - 1;p++){
        for(int r = 0;r < N - p - 1;r++){
            if(gpa[r] < gpa[r + 1] 
                || gpa[r] == gpa[r + 1] && sno[r] > sno[r + 1]){
                temp = gpa[r];
                gpa[r] = gpa[r + 1];
                gpa[r + 1] = temp;
                temp = sno[r];
                sno[r] = sno[r + 1];
                sno[r + 1] = temp;
            }
        }
    }
    for(int q = 0;q < N;q++){
        cout<<sno[q]<<" "<<gpa[q]<<endl;
    }
    return 0;
}