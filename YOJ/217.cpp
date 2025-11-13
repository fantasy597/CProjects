#include <iostream>
#include<cmath>
using namespace std;
int findmax(int x,int y, int p, int q){
    int max;
    max =x > y?x:y;
    max =max > p?max:p;
    max =max > q?max:q;
    return max;
}
int findmin(int x,int y, int p, int q){
        int min;
    min =x < y?x:y;
    min =min < p?min:p;
    min =min < q?min:q;
    return min;
}
int main()
{
    int x[4],y[4],z[4];
    for(int i = 0;i < 4;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    int temp,xmax,ymax,zmax,xmin,ymin,zmin;
    xmax = findmax(x[0],x[1],x[2],x[3]);
    ymax = findmax(y[0],y[1],y[2],y[3]);
    zmax = findmax(z[0],z[1],z[2],z[3]);
    xmin = findmin(x[0],x[1],x[2],x[3]);
    ymin = findmin(y[0],y[1],y[2],y[3]);
    zmin = findmin(z[0],z[1],z[2],z[3]);
    return 0;
    int lshuju[1005],num[1005],v = 0,l;
    for(int q = xmin;q <= xmax;q++){
        for(int w = ymin;w <= ymax;w++){
            for(int e = zmin;e <= zmax - 1;e++){
                l = int(sqrt(pow((q - x[0]),2) + pow((w - y[0]),2) + pow((e - z[0]),2)) - 0.5)
                + int(sqrt(pow((q - x[1]),2) + pow((w - y[1]),2) + pow((e - z[1]),2)) - 0.5)
                + int(sqrt(pow((q - x[2]),2) + pow((w - y[2]),2) + pow((e - z[2]),2)) - 0.5)
                + int(sqrt(pow((q - x[3]),2) + pow((w - y[3]),2) + pow((e - z[3]),2)) - 0.5);
                lshuju[v] = l;
                num[v]++;

                v++;

            }
        }
    }
}