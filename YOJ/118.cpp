#include <iostream>
using namespace std;
int N;
long long num[2][2] = {{1, 1}, {1, 0}};
shuzu s;
struct shuzu
{
    long long f1;
    long long f2;
    long long f3;
    long long f4;
};
shuzu cal(long long num1[2][2], long long num2[2][2])
{
    shuzu answer;
    long long f1 = 0;
    answer.f1 = num1[0][0] * num2[0][0] + num1[0][1] * num2[1][0];
    answer.f2 = num1[0][0] * num2[0][1] + num1[0][1] * num2[1][1];
    answer.f3 = num1[1][0] * num2[0][0] + num1[1][1] * num2[1][0];
    answer.f4 = num1[1][0] * num2[0][1] + num1[1][1] * num2[1][1];
    return answer;
}
shuzu f(long long num[][2],int x)
{
    shuzu answer;
    if(x == 1)
    {
        return ;
    }
    if(x % 2 == 0)
    {

    }
}
int main()
{
    cin>>N;
    if(N % 2 == 0)
    {
    }
}