#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int num[101][101];
    for(int i = 0; i < N;i++)
    {
        for(int j = 0;j < N;j++)
        {
            cin>>num[i][j];
        }
    }
    int min = num[0][0];
    for(int i = 0;i < N;i++)
    {
        min = min<=num[i][i] ? min : num[i][i];
        min = min<=num[i][N - 1 - i] ? min : num[i][N - 1 - i];
    }
    cout<<min;
    return 0;
}