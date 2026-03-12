#include <stdio.h>
#include <stdlib.h>

void mySort(int *array,int Left,int Right)
{
    for(int i = Left;i < Right;i++)
    {
        for(int j = Left;j < Right - i;j++)
        {
            if(array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()  
{  
    int array[100], i, n;
    
    scanf("%d",&n);

    for ( i = 0; i < n; i ++ ){
        scanf("%d", &array[i]);
    }

    mySort(array, 0, n - 1);

    for ( i = 0; i < n; i ++ ){
        printf("%d ", array[i]);
    }
    printf("\n");  
    return 0;  
}  