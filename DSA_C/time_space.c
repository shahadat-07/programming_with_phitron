#include <stdio.h>

int main()
{
    // int i, n, even[101];

    // for(i = 0; i < 101; i++)
    // {
    //     even[i] = 0;
    // }

    // for(i = 0; i < 101; i += 2)
    // {
    //     even[i] = 1;
    // }

    // scanf("%d", &n);

    // if(even[n]){
    //     printf("%d is a even number\n", n);
    // } else {
    //     printf("%d is a odd number\n", n);
    // }





    int i , j, n, count;

    scanf("%d", &n);

    count = 0;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            count = count + 1;
        }
    }

    printf("n = %d, count = %d\n", n , count);
    
    return 0;
}