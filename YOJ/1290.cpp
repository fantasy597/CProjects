#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <cmath>
#include <vector>
using namespace std;
int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '-')
        return 1;
    if (x == '>')
        return 2;
    if (x == '|')
        return 3;
    if (x == '&')
        return 4;
    if (x == '!')
        return 5;
    return -1;
}
bool cal(bool a, bool b, char x)
{
    if (x == '!')
        return !a;
    if (x == '&')
        return a && b;
    if (x == '|')
        return a || b;
    if (x == '>')
        return !a || b;
    if (x == '-')
        return a && b || !a && !b;
    return false; // 非法输入直接返回false
}
bool eva(string str, map<char, bool> var_val)
{
    stack<bool> operands;
    stack<char> ops;
    for (int i = 0; i < str.size(); i++)
    {
        char c = str[i];
        if (islower(c))
        {
            operands.push(var_val[c]);
        }
        else if (c == '(')
        {
            ops.push(c);
        }
        else if (c == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                char op = ops.top();
                ops.pop();
                if (op == '!')
                {
                    bool a = operands.top();
                    operands.pop();
                    operands.push(cal(a, false, '!'));
                }
                else
                {
                    bool b = operands.top();
                    operands.pop();
                    bool a = operands.top();
                    operands.pop();
                    operands.push(cal(a, b, op)); // 哪个在左哪个在右
                }
            }
            ops.pop(); // 弹左括号
        }
        else
        {
            while (!ops.empty() && priority(ops.top()) >= priority(c))
            {
                char op = ops.top();
                ops.pop();
                if (op == '!')
                {
                    bool a = operands.top();
                    operands.pop();
                    operands.push(cal(a, false, '!'));
                }
                else
                {
                    bool b = operands.top();
                    operands.pop();
                    bool a = operands.top();
                    operands.pop();
                    operands.push(cal(a, b, op));
                }
            }
            ops.push(c); // 当前运算符入栈？？？
        }
    }
    while (!ops.empty())
    {
        char op = ops.top();
        ops.pop();
        if (op == '!')
        {
            bool a = operands.top();
            operands.pop();
            operands.push(cal(a, false, '!'));
        }
        else
        {
            bool b = operands.top();
            operands.pop();
            bool a = operands.top();
            operands.pop();
            operands.push(cal(a, b, op));
        }
    }
    return operands.top();
}
int main()
{
    map<char,bool> var_val;
    vector<char> var_list;
    int abc[26] = {0}, abcnum = 0;
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            abc[str[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (abc[i] != 0)
        {
            var_list.push_back(char(i + 'a'));
            abcnum++;
        }
    }
    for (char var : var_list)
    {
        cout << var << ' ';
    }
    cout << str;
    cout << endl;
    for (int i = 0; i < pow(2, abcnum); i++)
    {
        for (int j = 0; j < abcnum; j++)
        {
            
            int val_int = (i >> (abcnum - 1 - j)) & 1;
            bool val = (val_int == 1);
            // 2.3 存入map：变量名和值绑定
            var_val[var_list[j]] = val;

            // 2.4 打印变量赋值（0/1），制表符对齐
            cout << val_int << ' ';
        }
        // 3. 调用eva函数计算表达式结果
        bool res = eva(str, var_val);

        // 4. 打印表达式结果（bool转0/1）
        cout << (res ? 1 : 0) << endl;
    }
    return 0;
}