#include <iostream>
using namespace std;
int main()
{
    int A, B, C, D, E;
    for (A = 0; A < 2; A++)
    {
        for (B = 0; B < 2; B++)
        {
            for (C = 0; C < 2; C++)
            {
                for (D = 0; D < 2; D++)
                {
                    for (E = 0; E < 2; E++)
                    {
                        bool S1 = (A || B || C) && (!D || E);
                        bool S2 = (A && D) || (B && E) || (C && D);
                        if(S1 != S2)
                        {
                            cout<<"不等价";
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout<<"等价";
}