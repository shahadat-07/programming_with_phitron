#include <stdio.h>

void find_max_min(int n, int ara[], int* p, int* q)
{
    *p = ara[0];
    *q = ara[0];

    for(int i = 0; i < n; i++)
    {
        if(ara[i] > *p)
        {
            *p = ara[i];
        }
        else if( ara[i] < *q)
        {
            *q = ara[i];
        }
    }
}

int main()
{
    int ara[] = {12, 34, 43, 89, 78, 56, 2, 45};

    int length = sizeof(ara) / sizeof(int);

    int maxx, minn;

    find_max_min(length, ara, &maxx, &minn);

    printf("The maximum number is: %d\n", maxx);
    printf("The minimum number is: %d\n", minn);

    return 0;
}