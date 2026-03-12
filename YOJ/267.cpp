#include <iostream>
using namespace std;
int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int month_[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int week[7] = {7, 1, 2, 3, 4, 5, 6};
int week_num[54] = {0};
int calfirst(int year) // year第一天是周几
{
    int run = 0;
    for (int i = 1969; i < year; i++)
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            run++;
        }
    }
    int temp = (year - 1969 + run + 3) % 7;
    int first = week[temp];
    return first;
}
struct info
{
    int id;
    int month;
    int date;
    int sex;
};
info a[10002];
int main()
{
    int year, n, m;
    cin >> year >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].id >> a[i].month >> a[i].date >> a[i].sex;
    }
    
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {

    }
}