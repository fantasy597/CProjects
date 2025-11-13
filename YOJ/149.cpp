#include <iostream>
using namespace std;
int main()
{
    int N, P, M;
    cin >> N >> P >> M;
    int A[6][6] = {0};
    int B[6][6] = {0};
    int C[6][6] = {0};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int k = 0; k < P; k++)
    {
        for (int p = 0; p < M; p++)
        {
            cin >> B[k][p];
        }
    }
    for (int q = 0; q < N; q++)
    {
        for (int y = 0; y < M; y++)
        {
            for(int x = 0;x < P;x++){
                C[q][y] += (A[q][x] * B[x][y]);
            }
        }
    }
    for(int i = 0;i < N;i++){
        for(int j = 0;j < M;j++){
            cout<<C[i][j]<<" ";
            if(j == M - 1){
                cout<<endl;
            }
        }
    }
    return 0;
}