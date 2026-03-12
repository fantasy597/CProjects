#include<iostream>
using namespace std;
int solution = 0;
int chess[15] = {0};
int lie[15] = {0};
int hang[15] = {0};
int ll[30] = {0};
int rr[30] = {0};  
void settle(int x,int N)  //第x行
{
    if(x >= N)
    {
    solution++;
    return;
    }
    else
    {
        for(int i = 0;i < N;i++)
        {
            if(lie[i] == 0 && ll[x - i + N] == 0 && rr[x + i] == 0) 
            {
                chess[x] = i;
                lie[i]++;
                ll[x - i + N]++;
                rr[x + i]++;
            
            settle(x + 1,N);
            lie[i]--;
            ll[x - i + N]--;
            rr[x + i]--;
            }
            else
            continue;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    settle(0,n);
    cout<<solution;
    return 0;
}