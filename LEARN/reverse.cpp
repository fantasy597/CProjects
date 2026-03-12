#include <iostream>
using namespace std;
#include<stdlib.h>
#include <string.h>
int main()
{
    char *string[4] = {NULL};
    for(int i = 0;i < 4;i++)
    {
        string[i] = (char *)malloc(100);
        cin>>*(string + i);
    }
    for(int i = 0,j = 3;i < j;i++,j--)
    {
        char *temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
    for(int o = 0;o < 4;o++)
    {
        cout<<string[o]<<" ";
        free(string[o]);
        string[o] = NULL;
    }
    return 0;
}