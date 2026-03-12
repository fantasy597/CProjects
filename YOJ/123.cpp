#include <iostream>
using namespace std;
int counter = 1;
void print(int n, int plate, char a, char b)
{
    cout << "[step " << n << "] move plate " << plate << "# from " << a << " to " << b << endl;
    counter++;
}
void move(int N, char A, char B, char C)     //参数不需要在函数里面初始化
{
    if (N == 1)
    {
        print(counter, N, A, C);
    }
    else
    {
        move(N - 1, A, C, B);
        print(counter, N, A, C);
        move(N - 1, B, A, C);
    }
}
int main()
{
    int N;
    char A = 'a';
    char B = 'b';
    char C = 'c';
    cin >> N;
    move(N, A, B, C);
    cout<<counter - 1;
}