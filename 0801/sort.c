#include <stdio.h>

int main()
{
    int i, j, temp;
    int flag;
    int num = 0;
    //int arr[8] = {3, 6, 7, 2, 9, 4, 8, 0};
    int arr[8] = {2, 1, 3, 4, 5, 6, 7, 8};
    
    for(i = 0;  i < 7; i++)
    {
        flag = 1;
        for(j = 0; j < 7-i ; j++)
        {
            printf("num = %d\n", ++num);
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                //flag = 0;
            }
        }
        if(flag)
            break;
    }

    for(i = 0; i < 8; i++)
        printf("%d\t", arr[i]);

    printf("\n"); //fflush(stdout);

    return 0;
}

