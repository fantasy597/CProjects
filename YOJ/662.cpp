#include<iostream>
using namespace std;
struct info
{
    char name[55];
    int score;
    float zongce;
    char isleader;
    char iswest;
    int n_paper;
    int money = 0;
};

int main()
{
    info stu;
    cin>>stu.name>>stu.score>>stu.zongce>>stu.isleader>>stu.iswest>>stu.n_paper;
    if(stu.n_paper >= 1 && stu.score > 80)
    {
        stu.money += 6000;
    }
    if(stu.score > 85 && stu.zongce > 80)
    {
        stu.money += 5000;
    }
    if(stu.score > 90)
    {
        stu.money += 4000;
    }
    if(stu.iswest == 'Y' && stu.score > 85)
    {
        stu.money += 2500;
    }
    if(stu.isleader == 'Y' && stu.zongce > 80)
    {
        stu.money += 950;
    }
    cout<<stu.name<<" "<<stu.money;
    return 0;
}