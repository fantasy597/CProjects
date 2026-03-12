#include <iostream>
#include <string>
using namespace std;
int main()
{
    int abc[27] = {0};
    int fuhao[5] = {0};
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            abc[str[i] - 97]++;
        }
        else if (str[i] == 33)
            fuhao[0]++;
        else if (str[i] == 38)
            fuhao[1]++;
        else if (str[i] == 124)
            fuhao[2]++;
        else if (str[i] == 62)
            fuhao[3]++;
        else if (str[i] == 45)
            fuhao[4]++;
    }
    int abcnum = 0;
    for (int i = 0; i < 26; i++)
    {
        if (abc[i] != 0)
            abcnum++;
    }
    int x = 0;
    for (int i = 0; i < 26; i++)
    {
        if (abc[i] != 0 && x != abcnum - 1)
        {
            cout << abc[i] << char(i + 97) << ' ';
            x++;
        }
        else if (abc[i] != 0 && x == abcnum - 1)
        {
            cout << abc[i] << char(i + 97) <<endl;
        }
    }
    if (fuhao[0] != 0)
        cout << fuhao[0] << '!' << ' ';
    if (fuhao[1] != 0)
        cout << fuhao[1] << '&' << ' ';
    if (fuhao[2] != 0)
        cout << fuhao[2] << '|' << ' ';
    if (fuhao[3] != 0)
        cout << fuhao[3] << '>' << ' ';
    if (fuhao[4] != 0)
        cout << fuhao[4] << '-' << ' ';
    return 0;
}