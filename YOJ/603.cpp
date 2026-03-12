#include <iostream>
using namespace std;
int N, M;
struct info
{
    int n;
    int num[105];
}; 
int ccc = 0,rescounter = 0;     //ccc 是全局变量，表示当前已经放入 res 数组的元素个数，相当于 res 数组的写入指针，记录下一个应该放置元素的位置
int res[105] = {0},status[105] = {0},avl[105] = {0};
info set[15];
void f(int x,int nnn)
{
    if(x > nnn)
    {
        rescounter++;
        cout<<rescounter<<". ";
        for(int i = 0;i < ccc;i++)   //ccc是输出res数组的指针
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        int oldcounter = ccc;      //把当前操作进行前的res数组指针保存，以便后来回溯， 关键点1：保存当前指针位置
        for(int i = 1;i <= N;i++)
        {
            if(status[i] != -1 && avl[i] == 0)
            {
                avl[i] = 1;  //将i置成已用过
                res[ccc++] = i;
                if(status[i] == 1)
                {
                    int temp = 0;
                    for(int y = 0;y < M;y++)
                    {
                        if(i == set[y].num[0])
                        {
                            temp = y;     //寻找i是哪个固定工序第一项
                            break;
                        }
                    }
                    for(int j = 1;j < set[temp].n;j++)    //从该固定工序组第二位开始储存
                    {
                        res[ccc++] = set[temp].num[j];
                    }
                }
                f(x + 1,nnn);
                avl[i] = 0;        //回溯
                ccc = oldcounter;    //这也是回溯，将ccc重置为 关键点2：恢复指针位置
            }
        }

    }
}
int main()
{
    int counter = 0;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> set[i].n;
        for (int j = 0; j < set[i].n; j++)
        {
            cin>>set[i].num[j];
            status[set[i].num[j]] = -1;
            counter++;
        }
        status[set[i].num[0]] = 1;
    }
    int nnnn = N - counter + M;
    f(1,nnnn);
    return 0;
}