#include <stdio.h>

int main()
{
    int N, S;
    scanf("%d %d", &N, &S);

    int remainder = S - N;
    int even_number = remainder / 2;
    printf("%d\n", even_number);

    return 0;
}

// Problem Statement

// If N is added to twice a number, the sum will be S. What is the number?

// Input Format

// The input contains two integer numbers N and S.
// Note: N and S contain even number only.

// Constraints

// 0 < N <= 200
// 0 < S <=500
// Output Format

// Output will show the one integer numbers in a separate line.
// Sample Input 0

// 8 20
// Sample Output 0

// 6
// Explanation 0

// if N = 8  and S = 20 then
// Twin Number--> 6.
// 8+6+6 = 20
// Sample Input 1

// 200 500
// Sample Output 1

// 150