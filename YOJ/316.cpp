#include<iostream>
using namespace std;
#include<string>
int main()
{
    string week[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int day;
    cin>>day;
    day = (day - 1) % 7;
    cout<<week[day];
    return 0;
}