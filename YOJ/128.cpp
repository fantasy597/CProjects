#include<iostream>
using namespace std;
int main(){
    int n,m,temp;
    cin>>n>>m;
    int sno[n],score[n];
    for(int i = 0;i < n;i++){
        cin>>sno[i]>>score[i];
    }
    //input
    int plan;
    plan = int(1.5*m / 1);
    for(int o = 0;o < n - 1;o++){
        for(int u = 0;u < n - 1 - o;u++){
            if(score[u] < score[u + 1] ||
            score[u] == score[u + 1] && sno[u] > sno[u + 1]){
                temp = score[u];
                score[u] = score[u + 1];
                score[u + 1] = temp;
                temp = sno[u];
                sno[u] = sno[u + 1];
                sno[u + 1] = temp;
            }
        }
    }
    while(score[plan - 1] == score[plan]){
        plan++;
    }
    cout<<score[plan - 1]<<" "<<plan<<endl;
    for(int h = 0;h < plan;h++){
        cout<<sno[h]<<" "<<score[h]<<endl;
    }
    return 0;
}