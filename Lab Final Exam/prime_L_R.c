#include <stdio.h>

int main()
{
    int T, L, R;
    scanf("%d", &T);


    for(int i = 0; i < T; i++)
    {
        scanf("%d %d", &L, &R);
    }

    // if(2 >= L) printf("2 ");
    for(int i = 0; i < T; i++)
    {
       
    }
    printf("\n");

    return 0;
}

// Problem Statement

// You are given two positive integers L and R. Now print the prime numbers between L to R.

// Note: Assume that 1 is a prime number

// Input Format

// The first line will contain T, the number of test cases.
// Each test case contains two positive integer L and R
// Constraints

// 0 < T <= 20
// 1 <= L,R <= 100 and where L < R
// Output Format

// Print the prime numbers between L to R.
// Sample Input 0

// 4
// 2 7
// 1 9
// 10 17
// 5 18
// Sample Output 0

// 2 3 5 7
// 1 2 3 5 7
// 11 13 17
// 5 7 11 13 17
