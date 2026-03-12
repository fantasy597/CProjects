#include <iostream>
using namespace std;
int steps = 0;
int n = 0;
int o = 0;
struct f
{
    int n1;
    int n2;
    int ary[105];
};
f out[10000];

int change(int num[], int L, int R)
{

    if(L >= R)
        return n;
    if (L == R - 1)
    {
        if (num[L] > num[R])
        {
            n++;
            int temp;
            temp = num[L];
            num[L] = num[R];
            num[R] = temp;
            //cout << L + 1 << "<->" << R + 1 << ":";
            out[o].n1 = L + 1;
            out[o].n2 = R + 1; 
            for (int i = 0; i <= R; i++)
            {
                out[o].ary[i] = num[i];
            }
            //cout << endl;
            o++;
        }
        return n;
    }
    if(L < R - 1)
    {
        int min = L;
        for (int j = L; j <= R; j++)
        {
            min = num[min] < num[j] ? min : j;
        }
        if (min != L)
        {
            int temp = num[L];
            num[L] = num[min];
            num[min] = temp;
            n++;
            out[o].n1 = L + 1;
            out[o].n2 = min + 1;

           // cout << L + 1 << "<->" << min + 1 << ":";
            for (int i = 0; i <= R; i++)
            {
                out[o].ary[i] = num[i];
            }
            //cout<<endl;
            o++;
        }
        return change(num,L + 1,R);
    }
}
int main()
{
    int m, a[105];
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        cin >> a[j];
    }
    change(a, 0, m - 1);
    for(int j = o - 1;j >= 0;j--)
    {
        cout<<out[j].n1<<"<->"<<out[j].n2<<":";
        for(int l = 0;l < m;l++)
        {
            cout<<out[j].ary[l]<<" ";
        }
        cout<<endl;
    }
    cout<<"Total steps:"<<n<<endl;
    cout<<"Right order:";
    for(int j = 0;j < m;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}