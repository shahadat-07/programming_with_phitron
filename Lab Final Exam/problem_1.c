#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)  
    {  
        for (int j = 1; j <= n - i; j++)  
        {  
            printf (" ");   
        }  

        // i = 1 =>  2 * 1 - 1 = 1
        // i = 2 => 2 * 2 - 1 = 3
        // i = 3 => 2 * 3 - 1 = 5
        
        for (int k = 1; k <= ( 2 * i - 1); k++)  
        {  
            if(i % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
        }  
        printf ("\n");  
    }  
    return 0;
}


// Write a C program that will take an integer N and creates this pattern for the corresponding inputs.

// For example,

// If N=3, the pattern look like this,
// image

// If N=6, the pattern look like this,
// image

// Input Format

// You will be given a positive integer N as input.
// Constraints

// 1 <= N <= 20

//      ^
//     ***
//    ^^^^^
//   *******
//  ^^^^^^^^^
// ***********