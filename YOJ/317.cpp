#include <iostream>
using namespace std;
#include <string>
long long change(char *l, char *r)   
{
    int weishu = r - l + 1;
    long long sum = 0;
    while (l <= r)
    {
        sum = 10 * sum + *l - '0';
        l++;
    }
    return sum;
}
int main()
{
    string str;
    getline(cin, str);
    int lenth = str.size();
    long long sumall = 0;
    for (int i = 0; i < lenth; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int ini = i;
            while (str[i] >= '0' && str[i] <= '9')
            {
                i++;
            }
            sumall += change(&str[ini], &str[i - 1]);
            
        }
    }
    cout << sumall;
    return 0;
}