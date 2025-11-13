#include <iostream>
// #include<algorithm>没有必要
using namespace std;
int main()
{
    int ary[50] = {0};
    int len1, len2;
    for (int i = 0; i < 50; i++)
    {
        cin >> ary[i];
        if (ary[i] == -1)
        {
            len1 = i; // 在输入的过程中就去检验有多少个元素
            break;
        }
    }
    for (int j = len1 + 1; j < 50; j++)
    {
        cin >> ary[j];
        if (ary[j] == -1)
        {
            len2 = j - len1 - 1;
            break;
        }
    }
    cout << len1 << endl
         << len2 << endl;
    int mini;
    mini = min(len1, len2);   //检索的最大次数
    int ary2[len2];
    for (int l = 0; l < len2; l++)
    {
        ary2[l] = ary[l + len1 + 1]; 
        //另开ary2，并给它赋值
    }
    int counter = 0;    //指示不同的字符
    for (int k = 0; k < mini; k++)
    {
        if (ary[k] != ary2[k])
        {
            cout << ary[k] - ary2[k] << endl;
            counter++;
            break;
        }
    }
    if (counter == 0)
    {
        if (len1 == len2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << "Not Comparable" << endl;
        }
    }
}