#include <iostream>
using namespace std;
struct info
{
};
int main()
{
    int T;
    cin >> T;
    char ipt[5][55][3];
    int len[6] = {0}; // 每组数据的长度
    char stan[4][13][3] = {{"DA", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "DT", "DJ", "DQ", "DK"},
                           {"CA", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "CT", "CJ", "CQ", "CK"},
                           {"HA", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "HT", "HJ", "HQ", "HK"},
                           {"SA", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "ST", "SJ", "SQ", "SK"}};
    char st[55][3] =
        {"SA", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "ST", "SJ", "SQ", "SK",
         "HA", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "HT", "HJ", "HQ", "HK",
         "CA", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "CT", "CJ", "CQ", "CK",
         "DA", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "DT", "DJ", "DQ", "DK"};
    for (int i = 0; i < T; i++)
    {
        int counter = 52;
        cin >> len[i];
        for (int j = 0; j < len[i]; j++)
        {
            cin >> ipt[i][j];
            for (int m = 0; m < 52; m++)
            {
                if (ipt[i][j] == st[m])
                {
                    counter--;
                    break;
                }
            }
        }
        cout<<counter;
    }
    return 0;
}