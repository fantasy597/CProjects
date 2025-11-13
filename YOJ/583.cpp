#include <iostream>    //身份证转换
using namespace std;
int f(char x)
{
    int real;
    real = int(x - 48);
    return real;
}
char shuzhuanzifu(int x){
    char real;
    real = char(x + 48);
    return real;
}
int main()
{
    char id[20] = {0};
    for (int i = 0; i < 6; i++)
    {
        cin >> id[i];
    }
    for (int i = 8; i < 17; i++)
    {
        cin >> id[i];
    }
    id[6] = '1';
    id[7] = '9';
    int quanzhong[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    int y = 0, s = 0; //y is value
    for (int j = 0; j < 17; j++)
    {
        s += f(id[j]) * quanzhong[j];
    }
    y = s % 11;

    if (y == 0)
    {
        y = 1;           
    }
    else if (y == 1)
    {
        y = 0;
    }
    else if (y == 2)
    {
        y = 'X' - 48;
    }
    else if (y == 3)
    {
        y = 9;
    }
    else if (y == 4)
    {
        y = 8;
    }
    else if (y == 5)
    {
        y = 7;
    }
    else if (y == 6)
    {
        y = 6;
    }
    else if (y == 7)
    {
        y = 5;
    }
    else if (y == 8)
    {
        y = 4;
    }
    else if (y == 9)
    {
        y = 3;
    }
    else if (y == 10)
    {
        y = 2;
    }
    id[17] = y;   
    for (int i = 0; i < 18; i++)
    {
        cout <<id[i];
    }
    return 0;
}