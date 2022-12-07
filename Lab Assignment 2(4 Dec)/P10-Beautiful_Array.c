#include <stdio.h>
#include <math.h>

int isBeautiful(int ara[], int n)
{
    int haveSeven = 0;
    for(int i = 0; i < n; i++)
    {
      while(*(ara + i) > 0)
      {
        if(*(ara + i) % 10 == 7)
        {
            haveSeven += 1;
            break;
        }
        *(ara + i) = *(ara + i) / 10;
      }
    }

    return haveSeven;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", ara + i);
    }

    int count = isBeautiful(ara, n);
    double number = ceil(n / 2);

    if(count >= number) printf("Beautiful\n");
    else printf("Ugly/n");

    return 0;
}

// Problem Statement:
// You are given an array of size n. And the next line will contain n positive integers. Your favourite number is 7. The array will be nice if half or more of the numbers in the array have 7 digits. Implement it using a function and traverse the array using pointers.

// See the sample input-output for more clarification.

// Note - If the array size is odd that time  consider the ceil value as half, for example n=5, that means n/2 = 5/2 = 3 

// Sample Input- 1
// -----------------------
// 6
// 33 1 17 171 88 734

// Sample Output- 1
// -----------------------
// Beautiful

// Sample Input- 2
// -----------------------
// 5
// 33 1 17 11 88 
