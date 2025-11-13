#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <cstring>
using namespace std;
// 在A里面找B，并用C去替换B
int replaceStr(char A[], const char B[], const char C[])
{
    int B_len = strlen(B);
    int A_len = strlen(A);
    int error = 0, st = 0;
    for (int i = 0; i <= A_len - B_len; i++)
    {
        error = 0;
        for (int j = i; j < i + B_len; j++)
        {
            if (A[j] != B[j - i])
            {
                error++;
                break;
            }
        }
        if (error == 0)
        {
            st = i;
            if (B_len > strlen(C))
            {
                for (int y = st + strlen(C); y < A_len - (B_len - strlen(C)); y++)
                {
                    A[y] = A[y + B_len - strlen(C)];
                }
                A[A_len - (B_len - strlen(C))] = '\0';
            }
            if (B_len < strlen(C))
            {
                for (int y =A_len - B_len + strlen(C) - 1; y >= st + strlen(C); y--)
                {
                    A[y] = A[y - (strlen(C) - B_len)];
                }
            }
            for (int o = st; o < st + strlen(C); o++)
            {
                A[o] = C[o - st];
            }
            return 1;
        }
    }
    for (int q = A_len; q < A_len + strlen(C); q++)
    {
        A[q] = C[q - A_len];
    }
    return 0;
}

int main()
{
    char str1[110], str2[110], str3[110];
    int nRes;

    cin.getline(str1, 100);
    cin.getline(str2, 100);
    cin.getline(str3, 100);

    nRes = replaceStr(str1, str2, str3);
    printf("%d\n", nRes);
    printf("%s\n", str1);
    return 0;
}
