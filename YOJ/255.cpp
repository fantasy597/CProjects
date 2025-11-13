#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int juzhen[25][25] = {0};
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin>>juzhen[i][j];
        }
    }
    int newjuzhen[25][25];

    for(int q = 0;q < m;q++){
        for(int u = 0;u < n;u++){
            newjuzhen[q][u] = juzhen[u][q];
            cout<<newjuzhen[q][u]<<" ";
            if(u == n - 1){
                cout<<endl;
            }
        }
    }
    return 0;
}