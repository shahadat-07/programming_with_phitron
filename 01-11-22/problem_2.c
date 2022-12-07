#include<stdio.h>

int main()
{
    int i, j, k, N, in, v;

    printf("Put a value for N: ");
    scanf("%d", &N);

    int arr[N];
    int Q = 3;
    
    printf("Give 3 input for the array\n");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Give 3 set of queries\n");
    for(j = 0; j < Q; j++)
    {
        scanf("%d %d", &in, &v);
        arr[in] = arr[in] + v;
    }

    for(i = 0; i < N; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}