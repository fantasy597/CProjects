#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int dot = 0;
    int str = 0;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            if(i == 0)
            {
                cout<<0;
                return 0;
            }
            dot++;
            s[i] = '\0';
            break;
        }
        if (s[i] >= 97 && s[i] <= 122 || s[i] >= 65 && s[i] <= 90 || s[i] == 32 || s[i] == 95) 
        {
            str++;
            break;
        }
    }
    if (dot == 0 && str == 0)
    {
        cout << stoi(s) + 1;
    }
    else if (dot == 1)
    {
        cout << stoi(s);
    }
    else if (str == 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] = s[i] - 32;
            }
        }
        cout << s;
    }
}