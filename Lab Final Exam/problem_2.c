#include <stdio.h>

int main()
{
    int N, temp;
    scanf("%d", &N);
    int A[N], B[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for(int j = 0; j < N; j++)
    {
        scanf("%d", &B[j]);
    }

    for(int i = 0; i < N; i++)
    {
       for(int j = 0; j < N - 1; j++)
       {
            if(A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
       }
    }

    for(int i = 0; i < N; i++)
    {
       for(int j = 0; j < N - 1; j++)
       {
            if(B[j] < B[j + 1])
            {
                temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
       }
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d\t", A[i] - B[i]);
    }

    return 0;
}


// Problem Statement

// You will be given the size of two arrays is N. Then you have taken two arrays as input. Now you have to sort the First array in ascending order and sort the second array in descending order. After that, your task is to print the difference of every elements between the first array and the second array from left to right.

// Input Format

// The first line contains a single positive integer N.
// The second line will contain N positive integers A1,A2,A3,A4…..An
// The third line will contain N positive integers B1,B2,B3,B4…..Bn
// Constraints

// 1 <= N <= 100
// 1 <= A[i] <= 100 where (0 <= i < N)
// 1 <= B[i] <= 100 where (0 <= i < N)
// Output Format

// Print the difference between the first array and the second array from left to right.
// Sample Input 0

// 5
// 2 3 1 4 5
// 1 5 3 7 8
// Sample Output 0

// -7 -5 -2 1 4
// Explanation 0

// In First Array A after sorting in ascending order it will look like this,

// 1 2 3 4 5

// In Second Array B after sorting in descending order it will look like this,

// 8 7 5 3 1

// Now we find the difference of every elements between First Array A and Second Array B

// A[0] - B[0] = 1 - 8 = -7

// A[1] - B[1] = 2 - 7 = -5

// A[2] - B[2] = 3 - 5 = -2

// A[3] - B[3] = 4 - 3 = 1

// A[4] - B[4] = 5 - 1 = 4

// Sample Input 1

// 6
// 8 4 10 1 6 9 
// 6 10 10 2 7 4 
// Sample Output 1

// -9 -6 -1 2 5 8 