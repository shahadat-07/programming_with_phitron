#include <stdio.h>

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    int *X, *Y;
     X = &x;
     Y = &y;

     printf("%d %d", *X, *Y);

    return 0;
}