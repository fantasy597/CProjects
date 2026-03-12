#include <iostream>
using namespace std;
struct info
{
    int main1;
    int main2;
    int drink;
    int fee;
};

int main()
{
    int main[5], drink[3], money;
    info f[1000];
    for (int i = 0; i < 5; i++)
    {
        cin >> main[i];
    }
    for (int j = 0; j < 3; j++)
    {
        cin >> drink[j];
    }
    cin >> money;
    int solution = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j || i == 0 && j == 2 || i == 2 && j == 0)
                continue;
            else
            {
                for (int o = 0; o < 3; o++)
                {
                    if (i == 4 || j == 4)
                    {
                        o = 2;
                        if (main[i] + main[j] + drink[o] <= money)
                        {
                            f[solution].main1 = i;
                            f[solution].main2 = j;
                            f[solution].drink = o;
                            f[solution].fee = main[i] + main[j] + drink[o];
                            solution++;
                            break;
                        }
                    }
                    if (i == 1 && o == 0 || j == 1 && o == 0)
                        continue;
                    if (main[i] + main[j] + drink[o] <= money)
                    {
                        f[solution].main1 = i;
                        f[solution].main2 = j;
                        f[solution].drink = o;
                        f[solution].fee = main[i] + main[j] + drink[o];
                        solution++;
                    }

                }
            }
        }
    }
    if(solution > 0)
    {
    cout << solution / 2<<endl;
    int index = 0;
    for(int i = 1;i < solution;i++)
    {
        index = f[index].fee <= f[i].fee ? index : i;
    }
    cout<<f[index].main1 + 1<<" "<<f[index].main2 + 1<<" "<<f[index].drink + 1<<" "<<f[index].fee;
    }
    else
    {
        cout<<"No solution";
    }
    
    return 0;
}