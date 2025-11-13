#include <iostream>
#include<cmath>
using namespace std;
struct info
{
    long long num;     // 本身
    long long counter; // 迭代次数
    long long num2;    // 回文数
};
long long Rev(long long num)
{
    long long num2 = 0;
    int n = 0;
    long long temp = num;
    while (temp > 0)
    {
        temp /= 10;
        n++;
    }
    int d = 1;
    while(num > 0){
        num2 += (num % 10) * pow(10,n - d);
        d++;
        num /= 10;
    }
    return num2;
}
info CalCounter(long long num)     //函数需要存多个数据，拿结构体（含所需数据）作为返回值
{
    info res;
    long long counter = 0,temp2 = num;
    while(Rev(temp2) != temp2){
        temp2 += Rev(temp2);
        counter++;
    }
    res.num = num;
    res.counter = counter;
    res.num2 = temp2;
    return res;
}
int main()
{
    long long s[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }
    info res[10];
    for(int j = 0;j < 10;j++){
        res[j] = CalCounter(s[j]);
    }
    for(int u = 0;u < 9;u++){
        for(int r = 0;r < 9 - u;r++){
            if(res[r].counter < res[r + 1].counter 
            || res[r].counter == res[r + 1].counter && res[r].num2 > res[r + 1].num2
            || res[r].counter == res[r + 1].counter && res[r].num2 == res[r + 1].num2 && res[r].num > res[r + 1].num){
                info temp;
                temp = res[r];
                res[r] = res[r + 1];
                res[r + 1] = temp;
            }
        }
    }
    for(int y = 0;y < 10;y++){
        cout<<res[y].num<<" "<<res[y].counter<<" "<<res[y].num2<<endl;
    }
    return 0;
}