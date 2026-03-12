#include<iostream>
#include<algorithm>
using namespace std;
int s[3005];
int main()
{
    int counter = 0,num_0 = 0;
    int n;
    cin>>n;
    int stone[3005],twi[3005] = {0};
    for(int i = 0;i < n;i++)
    {
        cin>>stone[i];
        if(stone[i] == 0)
        num_0 ++;
    }
    for(int i = 0;i < n - 1;i++)
    {
        for(int j = 0;j < n - 1 - i;j++)
        {
            if(stone[j] > stone[j + 1])
            {
                int temp = stone[j];
                stone[j] = stone[j  + 1];
                stone[j + 1] = temp;
            }
        }
    }
    int v = 1;
    s[0] = stone[0];
    for(int i = 0;i < n - 1;i++)
    {
        if(stone[i] != stone[i + 1])
        {
            s[v++] = stone[i + 1];
        }
    }
    for(int u = 0;u < v;u++)
    {
        for(int r = 0;r < n;r++)
        {
            if(s[u] == stone[r])
            twi[u]++;
            if(twi[u] >= 2)
            break;
        }
    }
    for(int o = 0;s[o] < 0;o++)
    {
        for(int j = v - 1;s[j] > 0;j--)
        {
            for(int b = o + 1;b < j;b++)
            {
                if(s[o] + s[j] + s[b] == 0)
                counter++;
            }
        }
    }
    for(int i = 0;s[i] < 0;i++)
    {
        for(int j = v - 1;s[j] > 0;j--)
        {
            if(2*s[i] + s[j] == 0 && twi[i] >= 2 || s[i] + 2*s[j] == 0 && twi[j] >= 2)
            counter++;
        }
    }
    if(num_0 >= 3)
    counter++;
    cout<<counter;
    return 0;
}