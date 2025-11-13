#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int j[105][105] = {0};
    int s = 2;
    j[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            for(int y = 0;y < i + 1;y++){
                j[y][i] = s;
                s++; 
            }
            for(int q = i - 1;q >= 0;q--){
                j[i][q] = s;
                s++;
            }
        }
        if(i % 2 == 0)
        {
            for(int h = 0;h < i + 1;h++){
                j[i][h] = s;
                s++;
            }
            for(int c = i - 1;c >= 0;c--){
                j[c][i] = s;
                s++;
            }
        }
    }
    for(int o = 0;o < n;o++){
        for(int t = 0;t < n;t++){
            cout<<j[o][t]<<" ";
            if(t == n - 1){
                cout<<endl;
            }
        }
    }
}