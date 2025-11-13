#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,temp,score = 0;
    cin>>n;
    int ary[n][6];
    for(int i = 0;i < n;i++){
        int num[6] = {0};
        for(int j = 0;j < 6;j++){
            cin>>ary[i][j];
        }
        for(int u = 0;u < 5;u++){            //排序
            for(int d = 0;d < 5 - u;d++){
                if(ary[i][d] < ary[i][d + 1]){
                    temp = ary[i][d];
                    ary[i][d] = ary[i][d + 1];
                    ary[i][d + 1] = temp;
                }
            }
        }              //输入的这行排序完成
    for(int p = 0;p < 6;p++){
        if(ary[i][p] == 4){
            num[3]++;
        }
        if(ary[i][p] == 2){
            num[1]++;
        }
        if(ary[i][p] == 1){
            num[0]++;
        }
        if(ary[i][p] == 3){
            num[2]++;
        }
        if(ary[i][p] == 5){
            num[4]++;
        }
        if(ary[i][p] == 6){
            num[5]++;
        }
    }
    if(ary[i][0] == 4 && ary[i][1] == 4 
    && ary[i][2] == 4 && ary[i][3] == 4
    && ary[i][4] == 1 && ary[i][5] == 1){
        score += 2048;
        continue;       
    }else if(ary[i][0] == 4 && ary[i][1] == 4 
    && ary[i][2] == 4 && ary[i][3] == 4
    && ary[i][4] == 4 && ary[i][5] == 4){
        score += 1024;
        continue;
    }else if(ary[i][0] == 1 && ary[i][1] == 1 
    && ary[i][2] == 1 && ary[i][3] == 1
    && ary[i][4] == 1 && ary[i][5] == 1){
        score += 512;
        continue;
    }else if(num[1] == 6){
        score += 256;
        continue;
    }else if(num[3] == 5){
        score += 128;
        continue;
    }else if(num[1] == 5){
        score += 64;
        continue;
    }else if(num[3] == 4){
        score += 32;
        continue;
    }else if(ary[i][0] == 6 && ary[i][1] == 5 
    && ary[i][2] == 4 && ary[i][3] == 3
    && ary[i][4] == 2 && ary[i][5] == 1){
        score += 16;
        continue;
    }else if(num[3] == 3){
        score += 8;
        continue;
    }else if(num[1] == 4){
        score += 4;
        continue;
    }else if(num[3] == 2){
        score += 2;
        continue;
    }else if(num[3] == 1){
        score += 1;
        continue;
    }else{
        score += 0;
        break;
    }

    }
    cout<<hex<<score;
    return 0;
}