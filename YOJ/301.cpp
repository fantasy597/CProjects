#include<iostream>
using namespace std;
int main()
{
    int n,m,g;
    cin>>n>>m>>g;
    int score[5000] = {0};
    for(int i = 0;i < n;i++){
        cin>>score[i];
    }
    int len = 100 / m;
    int counter[m] = {0};
    for(int o = 0;o < n;o++){
        int temp;
        temp = int(score[o] / len) + 1;
        counter[temp]++;
    }
    cout<<"["<<100 - len<<",100]"
}