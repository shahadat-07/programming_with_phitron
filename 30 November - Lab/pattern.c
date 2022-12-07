#include <stdio.h>

void print_hash(int x)
{
    for(int i = 0; i < x; i++)
    {
        printf("#");
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Please give the number: ");
    scanf("%d", &n);
    
   for(int i = 0; i < n; i++)
   {
    print_hash(i);
   }

    return 0;
}