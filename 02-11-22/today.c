#include <stdio.h>
#include <string.h>

int main()
{
    int n = 9;
    // 1 2 3 4 5 6 7 8 9
    int even[n], odd[n];

    for(int i = 1, j = 0; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            even[j] = i;
            j++;
        }
    }

    for(int i = 0, j = 0; i < n; i++)
    {
        if(i % 2 != 0)
        {
            odd[j] = i;
            j++;
        }
    }

    printf("Printing the even values\n");
    for(int i = 0; i < n; i++)
    {
       printf("%d\t", even[i]);
    }
    printf("\n");

    printf("Printing the odd values\n");
    for(int i = 0; i < n; i++)
    {
       printf("%d\t", odd[i]);
    }

}

